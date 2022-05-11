#include<bits/stdc++.h>
using namespace std;
int nonwscount(string& s) {
    int count=0;
    for(char& letter: s) {
        if(letter==' ' || letter=='\n' || letter=='\t') {
            count++;
        }
    }
    return count;
}
int vowelcount(string& s) {
    int count=0;
    for(char& c: s) {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
            count++;
            cout<<c<<" ";
        }
    }
    cout<<endl;
    return count;
}
int semivowelcount(string& s) {
    int count=0;
    for(char& c: s) {
        if(c=='W' || c=='Y' || c=='w' || c=='y') {
            count++;
            cout<<c<<" ";
        }
    }
    cout<<endl;
    return count;
}
int consonantcount(string& s) {
    return s.length()-vowelcount(s)-semivowelcount(s);
}
int main() {
    string s="";
    string non_consonants="aeiouAEIOUwyWY";
    vector<string> words;
    sort(non_consonants.begin(),non_consonants.end());
    while(true) {
        int choice=0;
        cout<<"Enter 0: to enter a sentence in English\n"
        <<"Enter 1: to display the current sentence\n"
        <<"Enter 2: to count non white spaces characters\n"
        <<"Enter 3: to count and list vowels\n"
        <<"Enter 4: to count and list semivowels\n"
        <<"Enter 5: to count and list consonants\n"
        <<"Enter 6: to list the words\n"
        <<"Enter 7: to list individual words\n"
        <<"Enter 8: to list words in alphabetical order\n"
        <<"Enter 9: to quit program\n"
        <<"Your choice: ";
        cin>>choice;
        if(choice==0) {
            words={};
            cout<<"Enter a sentence: ";
            cin.ignore();
            getline(cin,s);
            s.push_back(' ');
            string temp="";
            for(char& c: s) {
                if(c==' ' || c=='\n' || c=='\t') {
                    words.push_back(temp);
                    temp="";
                }
                else {
                    temp.push_back(c);
                }
            }
            s.pop_back();
        }
        else if(choice==1) {
            cout<<"Entered sentence: "<<s<<endl;
        }
        else if(choice==2) {
            cout<<"Non white spaces: "<<nonwscount(s)<<endl;
        }
        else if(choice==3) {
            int vowels=vowelcount(s);
            cout<<"Number of vowels: "<<vowels<<endl;
        }
        else if(choice==4) {
            int semivowels=semivowelcount(s);
            cout<<"Number of semivowels: "<<semivowels<<endl;
        }
        else if(choice==5) {
            int consonants=consonantcount(s);
            for(char& c: s) {
                if(!(binary_search(non_consonants.begin(),non_consonants.end(),c))) {
                    cout<<c<<" ";
                }
            }
            cout<<endl;
            cout<<"Number of consonants: "<<consonants<<endl;
        }
        else if(choice==6) {
            cout<<"List of words: ";
            for(int i=0; i<words.size(); i++) {
                cout<<words[i]<<" ";
            }
            cout<<endl;
        }
        else if(choice==7) {
            cout<<"List of individual words: "<<endl;
            for(string& word: words) {
                cout<<word<<endl;
            }
        }
        else if(choice==8) {
            vector<string> temporary=words;
            sort(temporary.begin(),temporary.end());
            cout<<"List of words in alphabetical order: ";
            for(string& word: temporary) {
                cout<<word<<" ";
            }
            cout<<endl;
        }
        else if(choice==9) {
            break;
        }
    }
    return 0;
}