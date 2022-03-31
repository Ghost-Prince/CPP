#include<bits/stdc++.h>
using namespace std;
class rectangle {
    private:
    int length, breadth;
    public:
    rectangle() {
        length=0, breadth=0;
    }
    rectangle(int l, int b) {
        length=l;
        breadth=b;
    }
    int area() {
        return length*breadth;
    }
    int perimeter() {
        return 2*(length+breadth);
    }
};
int main() {
    rectangle r(10,5);
    cout<<r.area()<<" "<<r.perimeter()<<endl;
    return 0;
}