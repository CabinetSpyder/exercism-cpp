#if !defined(HAMMING_H)
#define HAMMING_H

#include <string>
#include <stdexcept> //Para std::domain_error

namespace hamming {

    int compute(std::string_view s1, std::string_view s2);

}  // namespace hamming

#endif // HAMMING_H