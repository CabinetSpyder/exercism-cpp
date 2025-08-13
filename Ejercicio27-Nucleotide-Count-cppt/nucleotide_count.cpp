#include "nucleotide_count.h"

namespace nucleotide_count {

    std::map<char, int >count(std::string_view s){
        std::map<char, int> counts{{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};

        for(auto ch : s){
            if(counts.find(ch) != counts.end()){
                //Found 
                counts[ch]++;
            }else{
                throw std::invalid_argument("invalid ADN string");
            }
        }

        return counts;

    }

}  // namespace nucleotide_count
