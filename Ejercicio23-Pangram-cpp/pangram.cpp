#include "pangram.h"

namespace pangram {

    bool is_pangram(const std::string& s){

        std::unordered_set<char> letters;

        for (char ch : s){
            if(std::isalpha(ch)){//Get just the letters
                letters.insert(std::tolower(ch));                
            }
        }

        return letters.size() == 26;
        
    }

    
}  // namespace pangram