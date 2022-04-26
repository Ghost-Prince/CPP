#include "Pllgrm.hpp"
using namespace std;
int main() {
    Pllgrm p1(10,10);
    float angle=30;  //in degree
    p1.setAngle(angle);
    cout<<p1.getAngle()<<endl;
    cout<<p1.getArea()<<endl;
    return 0;
}