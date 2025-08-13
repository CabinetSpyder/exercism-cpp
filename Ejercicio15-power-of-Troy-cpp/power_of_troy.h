#pragma once

#include <string>
#include <memory>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};

//Task 1
struct human {
    
    std::unique_ptr<artifact> possession;
    std::shared_ptr<power> own_power;
    std::shared_ptr<power> influenced_by; 
};
//Task 2
void give_new_artifact(human& h, const std::string& s);
//Task 3
void exchange_artifacts(std::unique_ptr<artifact>& a1, std::unique_ptr<artifact>& a2);
//Task 4
void manifest_power(human& h, const std::string& s);
//Task 5
void use_power(human& caster, human& target);
//Task 6
int power_intensity(human& h);
    
}  // namespace troy
