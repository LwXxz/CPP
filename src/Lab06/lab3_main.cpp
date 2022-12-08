#include <iostream>

using namespace std;

struct point
{
    float x;
    float y;
};

point setpoint(float x, float y){
    point pt = {.x = x, .y = y};
    return pt;
}

point medianpoint(point pt1, point pt2){
    point ptMedian = {.x = 0.5 * (pt1.x + pt2.x), .y = 0.5 * (pt1.y + pt2.y)};
    return ptMedian;
}

int main (int argc, char** argv){
    point point1 = setpoint(2, 3);
    point point2 = setpoint(3, 2);
    point pointRes = medianpoint(point1, point2);
    std::cout << "x is " << pointRes.x << ", y is " << pointRes.y << std::endl;
}
