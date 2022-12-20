#pragma once
#define PI 3.14
#include <iostream>

using namespace std;

class CSteroShape
{
private:
    static  int numberOfObject;
public:
    CSteroShape(){
        this->numberOfObject ++;
    };
    CSteroShape(const CSteroShape& other){
        this->numberOfObject ++;
    };

    static int GetNumOfObect(){
        return CSteroShape::numberOfObject;
    };   

    virtual double GetArea() {return 0.0;};
    virtual double GetVolume() {return 0.0;};
    virtual void show() { cout << "it is CSterShape" << endl;};
};

class CCube : public CSteroShape{
private:
    double length;
    double width;
    double height;
public:
    CCube(): CSteroShape(){
        this->length = 0;
        this->width = 0;
        this->height = 0;
    };
    CCube(const double& length, const  double& width, const    double& height): CSteroShape(){
        this->length = length;
        this->width = width;
        this->height = height;    
    };
    CCube(const CCube& other): CSteroShape(other){
        this->length = other.length;
        this->width = other.width;
        this->height = other.height;     
    };

    double GetArea() override;
    double GetVolume() override;
    void show() override;
};

class CSphere : public CSteroShape{
private:
    double r;
public:
    CSphere(): CSteroShape(){
        this->r = 0.0;
    };
    CSphere(const double& r): CSteroShape(){
        this->r = r;
    };
    CSphere(const CSphere& other): CSteroShape(other){
        this->r = other.r;
    };

    double GetArea() override;
    double GetVolume() override;
    void show() override;
};