#include "lab2_DayInfo.hpp"
#include <iostream>

int main(int argc, char **argv){
    Day today = SUNDAY;
    Weather weather = Sunny;
    DayInfo dayInfo = {.day = today, .weather = weather};
    bool res = canTravel(dayInfo);
    if (res) {
        std::cout << "can travel!!!!" << std::endl;
    }else {
        std::cout << "not today" << std::endl;
    }
}