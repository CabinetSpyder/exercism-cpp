#if !defined(SAY_H)
#define SAY_H

#include <string>
#include <stdexcept>
#include <vector>

namespace say {

// TODO: add your solution here

    inline std::vector<std::string> numbers_basic{"zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen"};
    inline std::vector<std::string> numbers_tens{"teen", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    std::string in_english(long int n);

    //Esta funcion recibe numeros del 0 al 99 y te devuelve el string correspondiente al numero
    std::string tens_to_string(int n); 

    //Esta funcion recibe numeros del 0 al 999 y te devuelve el string correspondiente al numero 
    std::string hundreds_to_string(int n);

}  // namespace say

#endif  // SAY_H