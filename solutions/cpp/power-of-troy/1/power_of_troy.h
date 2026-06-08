#pragma once

#include <string>
#include<memory>

namespace troy {

struct artifact {
    // constructors needed (until C++20)
    artifact(std::string name) : name(name) {}
    std::string name;
};

struct power {
    // constructors needed (until C++20)
    power(std::string effect) : effect(effect) {}
    std::string effect;
};
    
class human{

public:
    human()=default;
    ~human()=default;
    std::unique_ptr<artifact>possession{};
    std::shared_ptr<power>own_power{};
    std::shared_ptr<power>influenced_by{};
};

    void give_new_artifact(human& human_,std::string str);
    void exchange_artifacts(std::unique_ptr<artifact> &a1,std::unique_ptr<artifact> &a2);
    void manifest_power(human& human_,std::string str);
    void use_power(human& human1,human& human2);
    int power_intensity(human& human_);

}  // namespace troy
