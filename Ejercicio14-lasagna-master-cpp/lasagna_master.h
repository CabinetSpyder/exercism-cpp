#pragma once

#include <string>
#include <vector>
#include <algorithm>

namespace lasagna_master {

    struct amount {
        int noodles;
        double sauce;
    };

    //Task 1
    int preparationTime(const std::vector<std::string>& layers, int minutes_per_layer);
    int preparationTime(const std::vector<std::string>& layers);

    //Task 2
    amount quantities (const std::vector<std::string>& layers);
    
    //Task 3
    void addSecretIngredient(std::vector<std::string>& my_ingridients, const std::vector<std::string>& friends_ingridients);

    //Task 4
    std::vector<double> scaleRecipe(const std::vector<double>& quantities, int num_portions);

    //Task 5
    void addSecretIngredient(std::vector<std::string>& my_ingridients, std::string aunt_ingridient);

}  // namespace lasagna_master
