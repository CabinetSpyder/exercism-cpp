#include "difference_of_squares.h"
#include <cmath>

namespace difference_of_squares {
    int square_of_sum(int num){
        int total_sum{0};
        
        for(int i{1}; i<=num; i++){
            total_sum += i;
        }

        return pow(total_sum, 2);
    }

    
    int sum_of_squares(int num){
        int total_sum{0};

        for (int i{1}; i<=num; i++){
            total_sum += pow(i, 2);
        }
        return total_sum;
    }

    
    int difference(int num){
        return square_of_sum(num) - sum_of_squares(num);
    }
    
}  // namespace difference_of_squares
