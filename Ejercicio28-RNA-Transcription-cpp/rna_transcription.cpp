#include "rna_transcription.h"

namespace rna_transcription {
    
    char to_rna(char ch){
        std::map<char, char> dna_to_rna_conversion{{'G', 'C'}, {'C', 'G'}, {'T', 'A'}, {'A', 'U'}};
        
        if(dna_to_rna_conversion.find(ch) != dna_to_rna_conversion.end()){
            return dna_to_rna_conversion[ch];

        }else{
            throw std::invalid_argument("invalid RNA protein");
        }
    }

    std::string to_rna(std::string s){
        
        std::map<char, char> dna_to_rna_conversion{{'G', 'C'}, {'C', 'G'}, {'T', 'A'}, {'A', 'U'}};
        std::string rna;

        for(auto ch : s){
            if(dna_to_rna_conversion.find(ch) != dna_to_rna_conversion.end()){
                rna += dna_to_rna_conversion[ch];
    
            }else{
                throw std::invalid_argument("Invalid dna string");
            }
        }
        return rna;
    }

}  // namespace rna_transcription
