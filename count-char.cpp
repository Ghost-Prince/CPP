#include<bits/stdc++.h>
using namespace std;
int ans=0;
int countChar(vector<char>& arr, char c, int i, int size) {
    if(arr[i]==c) {
        ans=ans+1;
    }
    if(i==size-1) {
        return ans;
    }
    return countChar(arr, c, i+1, size);
}
int main() {
    vector<char> testa={'a','B','b','C','A','a'};
    int aCount=countChar(testa, 'a', 0, 6);
    cout<<aCount<<endl;
    return 0;
}

// output: 2