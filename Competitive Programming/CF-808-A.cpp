#include<bits/stdc++.h>
using namespace std;
string solve(vector<int>& vec, int& len) {
    for(int i=1; i<len; i++) {
        if(vec[i]%vec[0] != 0) {
            return "NO";
        }
    }
    return "YES";
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0;
        cin>>len;
        vector<int> vec;
        for(int i=0; i<len; i++) {
            int x=0;
            cin>>x;
            vec.push_back(x);
        }
        cout<<solve(vec,len)<<endl;
    }
    return 0;
}