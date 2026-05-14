// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#include "doctor_data.h"
using namespace star_map;
//using namespace heaven;

namespace heaven{

    Vessel::Vessel(std::string name_,int generation_,star_map::System sys_)
    :name(name_),generation(generation_),current_system(sys_)
    {
    }
    Vessel Vessel::replicate(const std::string& name_){
        Vessel clone;
        clone.name = name_;
        clone.generation=generation+1;
        clone.current_system = current_system;
        return clone;
        //return {name_,generation+1,current_system};
    }
    
    void Vessel::make_buster(){
        ++busters;
    }
 
    bool Vessel::shoot_buster(){
        if(busters>0){
            busters--;
            return true;
        }
        return false;
    }

    std::string  get_older_bob(const Vessel& v1,const Vessel& v2){
        return v1.generation<v2.generation?v1.name:v2.name;
        
    }
    bool in_the_same_system (const Vessel& v1,const Vessel& v2){
        return v1.current_system == v2.current_system;
    }
}