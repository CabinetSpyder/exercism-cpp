#include "lasagna_master.h"

namespace lasagna_master {

    //Task 1
    int preparationTime(const std::vector<std::string>& layers, int minutes_per_layer){
        return layers.size() * minutes_per_layer;
    }

    int preparationTime(const std::vector<std::string>& layers){
         return layers.size() * 2;
    }
    
    //Task 2
    amount quantities (const std::vector<std::string>& layers){
        amount aux; 
        
        aux.noodles = 50 * std::count(layers.begin(), layers.end(), "noodles");
        aux.sauce = 0.2 * std::count(layers.begin(), layers.end(), "sauce");

        return aux;     
    }

    //Task 3
    void addSecretIngredient(std::vector<std::string>& my_ingridients, const std::vector<std::string>& friends_ingridients){
        my_ingridients.back() = friends_ingridients.back();
    }

    //Task 4
    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int num_portions){

        double aux = 2.0/num_portions;
        std::vector<double> updated_quantities;
        
        for (auto i : quantities){
            updated_quantities.emplace_back(i / aux);
        }

        return updated_quantities;
        
    }

    //Task 5
    void addSecretIngredient(std::vector<std::string>& my_ingridients, std::string aunt_ingridient){
        my_ingridients.back() = aunt_ingridient;
    }

}  // namespace lasagna_master
