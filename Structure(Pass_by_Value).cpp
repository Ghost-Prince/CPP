#include<bits/stdc++.h>
using namespace std;
struct rectangle {
    int length, breadth;
};
int area(rectangle r) {
    return r.length*r.breadth;
}
int perimeter(rectangle r) {
    return 2*(r.length+r.breadth);
}
int main() {
    rectangle r1;
    r1.length=10;
    r1.breadth=5;
    cout<<area(r1)<<" "<<perimeter(r1)<<endl;
    return 0;
}