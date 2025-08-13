#if !defined(GIGASECOND_H)
#define GIGASECOND_H

#include "boost/date_time/posix_time/posix_time.hpp"
#include <string>


namespace gigasecond {
    using namespace boost::posix_time;
    
// TODO: add your solution here
    ptime advance(ptime date);


}  // namespace gigasecond

#endif  // GIGASECOND_H