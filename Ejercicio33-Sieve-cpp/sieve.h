#if !defined(SIEVE_H)
#define SIEVE_H

#include <vector>

namespace sieve {

    /*
    Funcion que busca num en el vector vec. Devuelve true si lo encuntra.
    */
    bool found_num_in_vector(const std::vector<int>& vec, int num);
    
    /*
    Funcion que devuelve los numeros primos entre el dos y num
    */
    const std::vector<int> primes(int num);

}  // namespace sieve

#endif // SIEVE_H