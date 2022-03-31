#include<bits/stdc++.h>
using namespace std;
class rectangle {
    private:
    int length, breadth;
    public:
    void initialize(int l, int b) {
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
    rectangle r;
    int l,b;
    cin>>l>>b;
    r.initialize(l,b);
    cout<<r.area()<<" "<<r.perimeter()<<endl;
    return 0;
}