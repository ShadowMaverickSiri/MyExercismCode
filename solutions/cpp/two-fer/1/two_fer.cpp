#include "two_fer.h"

namespace two_fer {

// TODO: add your solution here
    std::string two_fer(const std::string& name){
        std::string str{};
        str.reserve(20);
        str = "One for " + name + ", one for me.";
        return str;
    }
    std::string two_fer(){
        return std::string("One for you, one for me.");
    }
    
}  // namespace two_fer
