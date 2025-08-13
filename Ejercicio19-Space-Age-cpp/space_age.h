#if !defined(SPACE_AGE_H)
#define SPACE_AGE_H

namespace space_age {
    class space_age{
        private:
            long int time_in_seconds{0};
        public:
            //Constructor
            space_age(long int time_in_seconds) : time_in_seconds(time_in_seconds) {}
            long int seconds() const{return time_in_seconds;}

            //Retunr the number in mercury years
            double on_mercury() const;  
            //Return time in venus years
            double on_venus() const;
            //Return the number of years on earth
            double on_earth() const;
            //Return time in mars years
            double on_mars() const;
            //Return time in jupiter yers
            double on_jupiter() const;
            //Return time in Saturn years
            double on_saturn() const;
            //Return time in Uranus years
            double on_uranus() const;
            //Return time in Neptune years
            double on_neptune() const;
            
    };

}  // namespace space_age

#endif // SPACE_AGE_H