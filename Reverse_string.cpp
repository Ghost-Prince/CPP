#include<bits/stdc++.h>
using namespace std;
void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    string str;
    getline(cin, str);
    int start=0, end=str.length()-1;
    while(start<=end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
    cout<<str<<endl;
    return 0;
}