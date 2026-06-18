#include "grains.h"
#include <limits>

namespace grains {

// TODO: add your solution here
    double square(unsigned num){
        if(num==1)
            return 1;
        else
            return 2*square(num-1);
    }

    double total(unsigned num){
        unsigned sum = 0;
        while(1){
            if(num<=1)
                break;
            sum +=square(num);
            num--;   
        }
        return sum;
    }
    double total(){
        
        return std::numeric_limits<unsigned long long>::max();
    }
}  // namespace grains
