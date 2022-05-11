#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> words;
    string s = "";
    cout << "Enter a sentence: ";
    cin.ignore();
    getline(cin, s);
    s.push_back(' ');
    string temp = "";
    for (char &c : s)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            words.push_back(temp);
            temp = "";
        }
        else
        {
            temp.push_back(c);
        }
    }
    s.pop_back();
    cout<<"List: ";
    for (string &word : words)
    {
        cout << word << ",";
    }
    cout << endl;
    return 0;
}