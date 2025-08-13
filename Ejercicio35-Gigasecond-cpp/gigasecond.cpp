#include "gigasecond.h"

namespace gigasecond {

// TODO: add your solution here
    ptime advance(ptime date){
        long int gigasecond = 1000000000;

        return date + seconds(gigasecond);
    }

}  // namespace gigasecond
