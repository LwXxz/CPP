#pragma once
enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
enum Weather {Sunny, Rainy, Windy, Cloudy, Warming, Drying};

struct DayInfo
{
    Day day;
    Weather weather;    
};

bool canTravel( DayInfo dayInfo );