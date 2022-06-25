#include<bits/stdc++.h>
using namespace std;
vector<int> union_of_sorted_arrays(vector<int>& a, vector<int>& b) {
    int start1=0, start2=0, len1=a.size(), len2=b.size();
    vector<int> answer;
    while(start1<len1 && start2<len2) {
        if(a[start1]<b[start2]) {
            answer.push_back(a[start1]);
            start1++;
        }
        else if(b[start2]<a[start1]) {
            answer.push_back(b[start2]);
            start2++;
        }
        else if(a[start1]==b[start2]) {
            answer.push_back(a[start1]);
            start1++;
            start2++;
        }
    }
    if(start1 != len1-1) {
        for( ; start1<len1; start1++) {
            answer.push_back(a[start1]);
        }
    }
    if(start2 != len2-1) {
        for( ; start2<len2; start2++) {
            answer.push_back(b[start2]);
        }
    }
    return answer;
}
int main() {
    vector<int> a={10,20,30,40,50,60,70,80,90,100};
    vector<int> b={5,10,15,20,25,30,35,40,45,50};
    for(int& number: union_of_sorted_arrays(a,b)) {
        cout<<number<<" ";
    }
    cout<<endl;
    return 0;
}