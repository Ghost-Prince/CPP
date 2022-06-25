#include<bits/stdc++.h>
using namespace std;
queue<string> function1(queue<string> que, string substring) {
    queue<string> ans;
    while(que.size()) {
        if(que.front().find(substring) != -1) {
            ans.push(que.front());
        }
        que.pop();
    }
    return ans;
}
int main() {
    vector<string> words={"12abc6", "ahgd67", "qtgab0", "ghab45"};
    queue<string> que;
    for(string& word: words) {
        que.push(word);
    }
    queue<string> ans=function1(que,"ab");
    while(ans.size()) {
        cout<<ans.front()<<endl;
        ans.pop();
    }
    int i=0;
    cout<<(++i)++<<endl;
    cout<<i<<endl;
    return 0;
}