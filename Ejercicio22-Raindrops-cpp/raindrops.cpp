#include "raindrops.h"

namespace raindrops {
    std::string convert(int number){
    
        std::string response{""};
        
        if ((number % 3) == 0){
            response = "Pling";
        }
        
        if((number % 5) == 0){
            response += "Plang";
        }
        
        if((number % 7) == 0){
            response += "Plong";
        }
        
        if(response.empty()){
            response = std::to_string(number);
        }
        
        return response;
    
    
    }
}  // namespace raindrops
