#include "triangle.h"

namespace triangle {
    flavor kind(double a, double b, double c){
        if( ((a+b) <= c) || ((a+c) <= b) || ((b+c) <= a) || (a<=0) || (b<=0) || (c<=0)){
            throw std::domain_error("Error: invalid triangle");
        }

        //Equilateral triangle -> all three sides have the same length
        if((a==b) && (b==c)){
            return flavor::equilateral;
            
        }else if( (a==b) || (b==c) || (a==c) ){ //isosceles triangle has at least two sides the same length
            return flavor::isosceles;
            
        }else{ //A scalene triangle has all sides of different lengths.
            return flavor::scalene;
        }
        
    }

}  // namespace triangle
