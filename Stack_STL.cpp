#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<string> s;
    s.push("Adeeb");
    s.push("Jamal");
    s.push("Ansari");
    cout<<s.top()<<endl<<s.size()<<endl;
    cout<<s.empty()<<endl;
    return 0;
}