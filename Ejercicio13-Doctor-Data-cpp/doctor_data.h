// ERROR: FILE CORRUPTED. Please supply valid C++ Code.

#pragma once
#include <string>

namespace star_map{
    enum System{BetaHydri, Sol, EpsilonEridani, AlphaCentauri, DeltaEridani, Omicron2Eridani};
}

namespace heaven{
    class Vessel{
        public:
            std::string name{""};
            int generation {0};
            star_map::System current_system = star_map::System::Sol;
            int busters {0};
    
            //Constructors
            Vessel(std::string n, int g, star_map::System sys);
            Vessel(std::string n, int g);

            //Functions
            Vessel replicate(std::string n);
            void make_buster();
            bool shoot_buster();            
    
    };

    std::string get_older_bob(Vessel v1, Vessel v2);
    bool in_the_same_system(Vessel v1, Vessel v2);
}


