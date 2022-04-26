#include<bits/stdc++.h>
using namespace std;
class Rect {
    public:
    int length, width;
    int getArea() {
        return length*width;
    }
};
class Pllgrm : Rect {
    public:
    float angle;
    Pllgrm(int length, int width) {
        this->length=length;
        this->width=width;
        this->angle=90;
    }
    void setAngle(float angle) {
        this->angle=angle;
    }
    float getAngle() {
        return this->angle;
    }
    float getArea() {
        return length*width*sin(angle*(3.1459265359/180));  // angle is converted from degree to radian
    }
};