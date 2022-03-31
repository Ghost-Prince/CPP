#include<bits/stdc++.h>
using namespace std;
struct rectangle {
    int length, breadth;
};
rectangle* fun() {
    rectangle* p;
    p=new rectangle;
    cin>>p->length;
    cin>>p->breadth;
    return p;
}
int main() {
    rectangle* ptr=fun();
    cout<<ptr->length<<" "<<ptr->breadth<<endl;
    return 0;
}
//   home/adeeb/Desktop/C++/.vscode/Structure(Pass_by_address).cpp   //