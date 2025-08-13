#include "grade_school.h"

namespace grade_school {

    std::map<int, std::vector<std::string>> school::roster() const{
        return roster_m;
    }

    //add() adds a student to a grade, and adds it in alphabetical order
    void school::add(std::string name, int gr){
        auto& names = roster_m[gr]; //auto& para tener una referencia al vector de roster_m[gr] y que los cambios que hagamos a traves de names se apliquen a roster[gr]

        //Encontrar la poscicion correcta usando std::lower_bound()
        auto pos = std::lower_bound(names.begin(), names.end(), name);

        //insertamos el nombre en la posicion devuelta por lower_bound()
        names.insert(pos, name);
        
    }

    //grade() returns the students in that grade in alphabetical order
    std::vector<std::string> school::grade(int gr) const{
         if (auto search = roster_m.find(gr); search != roster_m.end()){
             return search->second;
             
         }else{
            return std::vector<std::string>{};
        }
           
    }
    
    
}  // namespace grade_school
