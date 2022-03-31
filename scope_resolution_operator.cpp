#include<bits/stdc++.h>
using namespace std;
class Arithmetic {
    private:
    int a,b;
    public:
    Arithmetic(int a,int b);
    int add();
    int sub();
};
Arithmetic::Arithmetic(int a, int b) {
    this->a=a;
    this->b=b;
}
int Arithmetic::add() {
    return a+b;
}
int Arithmetic::sub() {
    return a-b;
}
int main() {
    int x,y;
    cin>>x>>y;
    Arithmetic num(x,y);
    cout<<num.add()<<" "<<num.sub()<<endl;
    return 100;
}