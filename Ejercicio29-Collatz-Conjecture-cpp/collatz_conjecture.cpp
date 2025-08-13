#include "collatz_conjecture.h"

namespace collatz_conjecture {

    long unsigned int steps(long int n){
        
        if(n <= 0 ){
            throw std::domain_error("Error: 0 is not a valid case");
        }
        
        long unsigned int step_count{0};
        while (n!=1){
            
            if(n%2 == 0){
                n /= 2;
            }else{
                n = n*3 +1;
            }
            step_count ++;
        }//End while()
        
        return step_count;

    }//End steps()



}  // namespace collatz_conjecture
