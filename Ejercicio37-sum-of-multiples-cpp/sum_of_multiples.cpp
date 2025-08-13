#include "sum_of_multiples.h"

namespace sum_of_multiples {

// TODO: add your solution here
int to (const std::vector<int>& magic_items, int level){
    std::unordered_set<int> multiplos;
    int total = 0;

    for(int i : magic_items){
        //Calcular el multiplo del item hasta que sea menor que el nivel
        for(int multiplicador = 1; i*multiplicador < level; multiplicador++){
            multiplos.insert(i*multiplicador); 
        }
    }

    //Sumar los datos
    for(int i : multiplos){
        total += i;
    }
     
    return total;
}

}  // namespace sum_of_multiples
