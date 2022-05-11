#include<bits/stdc++.h>
using namespace std;
bool comp(int a, int b) {
    return b<a;
}
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int len=0, que=0;
        cin>>len>>que;
        vector<int> vec;
        for(int i=0; i<len; i++) {
            int x=0;
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.begin(),vec.end(),comp);
        int sum=accumulate(vec.begin(),vec.end(),0);
        int sum2=0;
        for(int i=0; i<len; i++) {
            sum2+= vec[i];
            vec[i]=sum2;
        }
        while(que--) {
            int s=0;
            cin>>s;
            if(s>sum) {
                cout<<-1<<endl;
                continue;
            }
            else if(s==sum) {
                cout<<len<<endl;
                continue;
            }
            auto it= lower_bound(vec.begin(),vec.end(),s);
            cout<<it-vec.begin()+1<<endl;
        }
    }
    return 0;
}