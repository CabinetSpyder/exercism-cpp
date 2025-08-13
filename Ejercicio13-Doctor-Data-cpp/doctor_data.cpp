// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#include "doctor_data.h"

heaven::Vessel::Vessel(std::string n, int g, star_map::System sys){
    name = n;
    generation = g;
    current_system = sys;
}
    
heaven::Vessel::Vessel(std::string n, int g){
    name = n;
    generation = g;
}

heaven::Vessel heaven::Vessel::replicate(std::string n){
    Vessel aux(n, this->generation+1, this->current_system);

    return aux;
}

void heaven::Vessel::make_buster(){
    busters++;
}
bool heaven::Vessel::shoot_buster(){
    if(busters == 0){
        return false;
    }else{
        busters--;
        return true;
    }
}

std::string heaven::get_older_bob(Vessel v1, Vessel v2){
    if(v1.generation <= v2.generation){
        return v1.name;
    }else{
        return v2.name;
    }
}
bool heaven::in_the_same_system(Vessel v1, Vessel v2){
    if(v1.current_system == v2.current_system){
        return true;
    }else{
        return false;
    }
}