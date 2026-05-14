// ERROR: FILE CORRUPTED. Please supply valid C++ Code.
#pragma once
#include<string>
namespace star_map{
    enum System{BetaHydri,Sol,EpsilonEridani,AlphaCentauri,DeltaEridani,Omicron2Eridani};
    
}

namespace heaven{
    class Vessel{
    public:
        Vessel()= default;
        Vessel(std::string name_,int generation_,star_map::System sys_=star_map::System::Sol);
        ~Vessel() = default;
        Vessel replicate(const std::string& name_);
        bool shoot_buster();
        void make_buster();
    std::string name{};
    int generation{} ;
    star_map::System current_system{} ;
    int busters=0;
    }; 
    std::string  get_older_bob(const Vessel& v1,const Vessel& v2);
    bool in_the_same_system (const Vessel& v1,const Vessel& v2);
}

