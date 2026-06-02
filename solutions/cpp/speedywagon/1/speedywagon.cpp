#include "speedywagon.h"
#include <iostream>

namespace speedywagon {

// Enter your code below:
bool connection_check(pillar_men_sensor *ptr){
    if(ptr!=nullptr)
        return true;
    return false;
}

int activity_counter(pillar_men_sensor *sensor_array,int size){
    int sum{};
    for(auto i=0;i<size;++i)
        {
            sum+=(sensor_array+i)->activity;
        }
    return sum;
}
bool alarm_control(pillar_men_sensor *ptr){
    if(ptr==nullptr)
        return false;
    if(ptr->activity>0)
        return true;
    else
        return false;
}
bool uv_alarm (pillar_men_sensor *ptr){
    if(ptr==nullptr)
        return false;
    int level=uv_light_heuristic(&ptr->data);
    if(level>ptr->activity)
        return true;
    else
        return false;
    
}
    
// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array){
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}


}  // namespace speedywagon

