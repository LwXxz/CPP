#include "lab2_DayInfo.hpp"

bool canTravel(DayInfo dayInfo){
    if ((dayInfo.day == 0 or dayInfo.day == 6) and dayInfo.weather == Sunny){
        return true;
    }else{
        return false;
    }
}