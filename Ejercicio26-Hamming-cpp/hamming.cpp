#include "hamming.h"

namespace hamming {

    int compute(std::string_view s1, std::string_view s2){
        if(s1.size() != s2.size()){
            throw std::domain_error("Error: DNA strings have different sizes");
        }

        int distance{0};

        for(size_t i = 0; i < s1.size(); i++){
            if (s1.at(i) != s2.at(i)){
                distance++;
            }
        }

        return distance;
    }



}  // namespace hamming
