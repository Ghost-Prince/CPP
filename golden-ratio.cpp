#include<bits/stdc++.h>
using namespace std;
double func(int n) {
    if(n==0) {
        return 0;
    }
    else if(n==1) {
        return 1;
    }
    else if(n==2) {
        return 1;
    }
    return func(n-1)+func(n-2)+func(n-3);
}
int main() {
    cout<<setprecision(8)<<endl;
    vector<double> vec;
    vec.push_back(func(30));
    for(int i=31; i<=40; i++) {
        vec.push_back(func(i));
        int len=vec.size();
        cout<<vec[len-1]/vec[len-2]<<" ";
    }
    cout<<endl;
    return 0;
}