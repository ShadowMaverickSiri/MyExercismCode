#include "power_of_troy.h"

namespace troy {

void give_new_artifact(human& human_,std::string str){
    human_.possession = std::make_unique<artifact>(str);
}
void exchange_artifacts(std::unique_ptr<artifact> &a1,std::unique_ptr<artifact> &a2){
    std::swap(a1, a2);
}
void manifest_power(human& human_,std::string str){
    human_.own_power= std::make_shared<power>(str);
}
void use_power(human& human1,human& human2){
    human2.influenced_by= human1.own_power;
}
int power_intensity(human& human_){
   // 1. 如果没有超能力，直接返回 0
    if (human_.own_power == nullptr) {    
        return 0;
    }
    
    // 2. 如果有超能力，其引用计数（use_count）
    // 恰好等于：1（施法者自己）+ 所有的受影响者（他们共享了同一个 shared_ptr）
    return human_.own_power.use_count();
    
}

    
}  // namespace troy

