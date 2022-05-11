#include<bits/stdc++.h>
using namespace std;
double func(double& x) {
    return pow(x,3) + pow(x,2);
}
int main() {
    double a=-2, b=4;
    double area=0;
    for(double x=a; x<=b; x+= 0.0000001) {
        area+= func(x)*0.0000001;
    }
    cout<<area<<endl;
    return 0;
}