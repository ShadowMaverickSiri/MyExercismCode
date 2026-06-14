#include "triangle.h"
#include <stdexcept>
namespace triangle {

// TODO: add your solution here
    flavor kind(double a,double b,double c){
        if(a<=0.||b<=0.||c<=0.||(a+b<=c)||(a+c<=b)||(b+c<=a))
        {
            throw std::domain_error("无法组成一个三角形");
        }
        else
        {
            if(a==b&&b==c&&a==c)
                return flavor::equilateral; 
            else if(a==b||a==c||b==c)
                return flavor::isosceles;
            else
                return flavor::scalene;
        }
    }
}  // namespace triangle
