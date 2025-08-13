#include "grains.h"

namespace grains {

    unsigned long long square(int casilla){
        unsigned long long trigo {0};
        
        for(int i=1; i<=casilla; i++){
            if(i==1){
                trigo = 1;
            }else{
                trigo *= 2; 
            }
            
        }

        return trigo;
        
    }

    unsigned long long total(){
        unsigned long long total_grain{0};

        for(int i=1; i<=64; i++){
            total_grain += square(i);
        }

        return total_grain;
        
    }

    
}  // namespace grains
