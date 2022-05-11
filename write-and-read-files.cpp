#include<bits/stdc++.h>
using namespace std;
int main() {
    fstream myfile; //creating a file
    myfile.open("file.txt",ios::out); // opening the file in write mode
    myfile<<"New file created. "; // adding content to file
    myfile.close(); // closing the file
    myfile.open("file.txt",ios::in); // opening file in read mode
    string str="";
    while(myfile>>str) { // reading the file
        cout<<str<<" ";
    }
    myfile.close(); // closing the file
    return 0;
}


// OUTPUT ---------->    New file created.