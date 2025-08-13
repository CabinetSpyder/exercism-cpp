#if !defined(RNA_TRANSCRIPTION_H)
#define RNA_TRANSCRIPTION_H

#include <string>
#include <map>
#include <type_traits> // para std::is_same_v
#include <stdexcept> //Para std::invalid_argument


namespace rna_transcription {

    
    
    char to_rna(char ch);
    
    std::string to_rna(std::string s);

}  // namespace rna_transcription

#endif // RNA_TRANSCRIPTION_H