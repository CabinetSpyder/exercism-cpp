#include "space_age.h"

namespace space_age {
    
    //Return time in Mercury years
    double space_age::on_mercury() const{
        return (double)time_in_seconds/(31557600 * 0.2408467);
    }
    
    //Return time in venus years
    double space_age::on_venus() const{
        return (double)time_in_seconds/(31557600 * 0.61519726);
    }
    
    //Return the number of years on earth
    double space_age::on_earth() const{
        return (double)time_in_seconds/31557600;
    }
    
    
    //Return time in mars years
    double space_age::on_mars() const{
        return (double)time_in_seconds/(31557600 * 1.8808158);
    }
    
    //Return time in jupiter yers
    double space_age::on_jupiter() const{
        return (double)time_in_seconds/(31557600 * 11.862615);
    }

    //Return time in Saturn years
    double space_age::on_saturn() const{
        return (double)time_in_seconds/(31557600 * 29.447498);
    }
    
    //Return time in Uranus years
    double space_age::on_uranus() const{
        return (double)time_in_seconds/(31557600 * 84.016846);
    }
    
    //Return time in Neptune years
    double space_age::on_neptune() const{
        return (double)time_in_seconds/(31557600 * 164.79132);
    }
}  // namespace space_age
