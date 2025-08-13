namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus{
        troll,
        guest,
        user,
        mod,
    };

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.
     enum class Action{
        read,
        write,
        remove,
    };

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus poster, AccountStatus viewer){
        if(poster == AccountStatus::troll && viewer == AccountStatus::troll){
            return true;
        }else if(poster == AccountStatus::troll){
            return false;
        }else{
            return true;
        }
    }

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
    bool permission_check(Action act, AccountStatus status){
    
        if(status == AccountStatus::guest){
            switch (static_cast<int>(act)){
    
                case 0: //read
                    return true;
                
                case 1: //write 
                case 2: //remove
                    return false;
            }
    
        }else if( (status == AccountStatus::troll) || (status == AccountStatus::user)){
            switch (static_cast<int>(act)){
    
                case 0: //read
                case 1: //write
                    return true;
    
                case 2: //remove
                    return false;
            }
    
        }else if(status == AccountStatus::mod){
            return true;
        }
        
        return false;
    }

    

// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus player1, AccountStatus player2){

        if( (player1 == AccountStatus::guest) || (player2 == AccountStatus::guest) ||
            ((player1 == AccountStatus::troll) && (player2 != AccountStatus::troll)) ||
            ((player1 != AccountStatus::troll) && (player2 == AccountStatus:: troll))){
            return false;
    
        }else{
            return true;
        }

    }

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus status1, AccountStatus status2){

        int status1_to_int {static_cast<int>(status1)};
        int status2_to_int{static_cast<int>(status2)};
    
        if(status1_to_int > status2_to_int){
            return true;
            
        }else{
            return false;
        }

    }


}  // namespace hellmath