#include<bits/stdc++.h>
using namespace std;
int main() {
    int tc=0;
    cin>>tc;
    while(tc--) {
        int no_wheels=0;
        cin>>no_wheels;
        vector<int> wheels;
        for(int i=0; i<no_wheels; i++) {
            int x=0;
            cin>>x;
            wheels.push_back(x);
        }
        for(int& wheel: wheels) {
            int num=0;
            cin>>num;
            string ops="";
            cin>>ops;
            for(char& op: ops) {
                if(op=='D') {
                    if(wheel==9) wheel=0;
                    else wheel++;
                }
                else if(op=='U') {
                    if(wheel==0) wheel=9;
                    else wheel--;
                }
            }
            cout<<wheel<<" ";
        }
        cout<<endl;
    }
    return 0;
}