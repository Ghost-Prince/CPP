#include<bits/stdc++.h>
using namespace std;
int main() {
    char s[]="under\tstand\n coding\n";
    int i;
    for(i=strlen(s); i>=0; i--) {
        if(s[i]!=' ' && s[i]!='\t' && s[i]!='\n'){
            break;
        }
    }
    s[i+1]='\0';
    cout<<i<<endl;
}