#include "power_of_troy.h"

namespace troy {

//Task 2
void give_new_artifact(human& h, const std::string& s){
    h.possession = std::make_unique<artifact>(s);
}

//Task 3
void exchange_artifacts(std::unique_ptr<artifact>& a1, std::unique_ptr<artifact>& a2){
    std::unique_ptr aux = std::move(a1);
    a1 = std::move(a2);
    a2 = std::move(aux);
}

//Task 4
void manifest_power(human& h, const std::string& s){
    h.own_power = std::make_shared<power>(s);
}

//Task 5
void use_power(human& caster, human& target){
    target.influenced_by = caster.own_power;
}

//Task 6
int power_intensity(human& h){
    if(h.own_power == nullptr){
        return 0;
    }else{
        return h.own_power.use_count();
    }
}
    
}  // namespace troy
