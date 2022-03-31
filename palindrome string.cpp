#include<iostream>
using namespace std;
bool palindrome_check(string a, int n) {
    int start=0, end=n-1;
    while(start<=end) {
        if(a[start]!=a[end]) {
            return false;
        }
        else {
            start++;
            end--;
        }
    }
    return true;
}
int main() {
    string str;
    cout<<"Enter string: ";
    cin>>str;
    int length=str.length();
    cout<<palindrome_check(str, length)<<endl;
    return 0;
}