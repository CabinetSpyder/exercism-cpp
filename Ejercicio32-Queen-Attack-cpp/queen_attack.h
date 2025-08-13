#if !defined(QUEEN_ATTACK_H)
#define QUEEN_ATTACK_H

#include <utility>
#include <stdexcept>

namespace queen_attack {

// TODO: add your solution here
class chess_board{
    private:
        std::pair<int, int> m_white;
        std::pair<int, int> m_black;

        static bool is_valid_position(std::pair<int, int> position); //static porque es una comprobacionb general que se peude usar sin tener un objeto de la clase
    
    public:
        chess_board(std::pair<int,int> white, std::pair<int, int> black)
            : m_white(white), m_black(black){
                if(!is_valid_position(white) || !is_valid_position(black)){
                    throw std::domain_error("invalid position");
                }

                if(white == black){
                    throw std::domain_error("the queens are in the same position");
                }
            }
        
        std::pair<int, int> white() const;
        std::pair<int, int> black() const;
        bool can_attack() const;
};

}  // namespace queen_attack

#endif  // QUEEN_ATTACK_H