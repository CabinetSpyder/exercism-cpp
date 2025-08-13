namespace targets {
// TODO: Insert the code for the alien class here
    class Alien{
        private:
            int health {3};
        public:
            //Variables
            int x_coordinate{0};
            int y_coordinate{0};
            
            //Constructor
            Alien(int x, int y){
                x_coordinate = x;
                y_coordinate = y;
            }

            //Getter
            int get_health(){
                return health;
            }

            bool hit(){
                if(health-1 >= 0){
                    health--;
                    return true;
                }else{
                    return false;
                }
            }

            bool is_alive(){
                if(health == 0){
                    return false;
                }else{
                    return true;
                }
            }

            bool teleport(int x_new, int y_new){
                x_coordinate = x_new;
                y_coordinate = y_new;
                return true;
            }

            bool collision_detection(Alien a1){
                if((this->x_coordinate == a1.x_coordinate) && (this->y_coordinate == a1.y_coordinate)){
                    return true;
                }else{
                    return false;
                }
            }
        
    
    };
    

}  // namespace targets