#include "sieve.h"

namespace sieve {

    bool found_num_in_vector(const std::vector<int>& vec, int num){
        for(int i : vec){
            if(i == num){
                return true;
            }
        }
        return false;
    }
    
    
    
    const std::vector<int> primes(int num){
    
        std::vector<int> range_of_numbers;
        std::vector<int> prime_numbers;
        std::vector<int> marked_numbers;
    
        //Making a list of numbers from 2 to num, num included
        for(int i=2; i<=num; i++){
            range_of_numbers.emplace_back(i);
        }
    
        //implementing Sieve of Eratosthenes algorithm
        for (int i: range_of_numbers){
            if(!found_num_in_vector(marked_numbers, i)){
                prime_numbers.emplace_back(i);
    
                for (int j : range_of_numbers){
                    if(j%i == 0){
                        marked_numbers.emplace_back(j);
                    }
    
                } //End internal for
            }
        }
    
        return prime_numbers;
    
    
    }

}  // namespace sieve
