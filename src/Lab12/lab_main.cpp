#include "stereo_graphic.hpp"
#include <iostream>

using namespace std;

int CSteroShape::numberOfObject = 0;

int main(int argc, char** argv){
    CCube cube1(4, 5, 6);
    CSphere sphere1(7);

    cube1.show();
    sphere1.show();
    CSteroShape* p = &cube1;
    p->show();

    p = &sphere1;
    p->show();

    cout << CSteroShape::GetNumOfObect() << " objects are created." << endl;
    return 0;
}