#include "stereo_graphic.hpp"
#include <iostream>

using namespace std;

double CCube::GetArea() {
    return (this->height * this->width + this->height * this->length + this->width * this->length) * 2;
}

double CCube::GetVolume() {
    return this->height * this->width * this->length;
}

void CCube::show() {
    cout << "Cube length: " << this->length << "\twidth: " << this->width << "\theight: " << this->height << endl;
    cout << "Cube area: " << this->GetArea() << "\tvolume: " << this->GetVolume() << endl;
}

double CSphere::GetArea() {
    return 4 * PI * this->r * this->r;
}

double CSphere::GetVolume() {
    return (double)4 / (double)3 * PI * this->r * this->r * this->r;
}

void CSphere::show() {
    cout.flags(ios::fixed);
    cout.precision(2);
    cout << "Sphere r: " << this->r << "\tarea: " << this->GetArea() << "\tvolume: " << this->GetVolume() << endl;
}
