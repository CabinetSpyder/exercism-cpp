#include "queen_attack.h"

namespace queen_attack {

// TODO: add your solution here
    std::pair<int, int> chess_board::white() const{
        return m_white;
    }
    
    
    std::pair<int, int>chess_board::black() const{
        return m_black;
    }

    bool chess_board::is_valid_position(std::pair<int, int> position){
        return position.first >= 0 && position.second >= 0 && position.first < 8 && position.second < 8;
    }

    bool chess_board::can_attack() const{
        if(m_white.first == m_black.first || m_white.second == m_black.second){
            return true;

        }else{//Comprobar las diagonales
            int row = m_white.second;
            int colum = m_white.first;
            
            
            //Hay cuatro diagonales: Arriba-izq, arriba-der, abajo-izq, abajo-der
            if(m_white.second > m_black.second){//La blanca esta por debajo de la negra. Comprobar diagonales inferiores
                
                for(int i = (row-1); i>=0; i--){ //Diagonal superior derecha
                    colum++;
                    if(i == m_black.second && colum == m_black.first){
                        return true;
                    }
                }

                //Reset variables
                row = m_white.second;
                colum = m_white.first;

                for(int i = (row-1); i>=0; i--){ //Diagonal superior izquierda
                    colum--;
                    if(i == m_black.second && colum == m_black.first){
                        return true;
                    }
                }

                return false;


            }else{ //La blanca por encima de la negra. Comprobar diagonales superiores
                
                for(int i = (row+1); i<8; i++){ //Comprobando la diagonal inferior derecha
                    colum++;
                    if(i == m_black.second && colum == m_black.first){
                        return true;
                    }
                }

                //Reset variables
                row = m_white.second;
                colum = m_white.first;

                for(int i = (row+1); i<8; i++){ //Comprobando la diagonal inferior izquierda
                    colum --;
                    if(i == m_black.second && colum == m_black.first){
                        return true;
                    }

                }

                return false;
               
            }
        }
    }

}  // namespace queen_attack
