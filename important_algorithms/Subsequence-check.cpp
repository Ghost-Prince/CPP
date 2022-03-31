#include<bits/stdc++.h>
using namespace std;
bool isSubsequence(string& test, string& main) {
    int len_test=test.length();
    int len_main=main.length();
    int index_test=0;
    int index_main=0;
    while(index_test<len_test && index_main<len_main) {
        if(main[index_main] == test[index_test]) {
            index_test++;
        }
        index_main++;
    }
    return index_test == len_test;
}
int main() {
    string test="acb", main="axbyzc";
    cout<<isSubsequence(test, main)<<endl;
    return 0;
}