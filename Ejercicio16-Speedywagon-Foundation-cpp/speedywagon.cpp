#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
//Task 1
bool connection_check(pillar_men_sensor *sensor){
    if(sensor != nullptr){
        return true;
    }else{
        return false;
    }
}

//Task 2
int activity_counter(pillar_men_sensor* sensor_array, int array_size){
    int sum {0};
    for(int i=0; i<array_size; i++){
        sum += sensor_array->activity;
        sensor_array++;
    }    
    return sum;
}

//Task 3
bool alarm_control(pillar_men_sensor* ptr){
    if(ptr == nullptr){
        return false;
    }else{
        if(ptr->activity > 0){
            return true;
        }else{
            return false;
        }
    }
}

//Task 4
bool uv_alarm(pillar_men_sensor* ptr){
    if(ptr == nullptr){
        return false;
    }
    int alarm_value {uv_light_heuristic(&ptr->data)};

    if(alarm_value > ptr->activity){
        return true;
    }else{
        return false;
    }

}
    
// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
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
