#include "raindrops.h"

namespace raindrops {

// TODO: add your solution here
    std::string convert(int number){
        std::string res_str{};
        res_str.reserve(15);
        res_str =number%3==0?res_str+"Pling":res_str;
        res_str =number%5==0?res_str+"Plang":res_str;
        res_str =number%7==0?res_str+"Plong":res_str;

        if(res_str.empty())
            res_str = std::to_string(number);

        return res_str; 
    }
}  // namespace raindrops
