#include<bits/stdc++.h>
using namespace std;
float miles=0, hours=0, miles_per_hour;
void getData(float& mile, float& hour) {
    miles=mile;
    hours=hour;
    miles_per_hour=mile/hour;
}
int main() {
    // creating the file.txt file and opening it in READ & WRITE mode 
    fstream MyFile("file.txt",ios::out);
    // adding given details
    MyFile<<"Miles travelled: 12340     Hours in trip: 460      MPH: 26.83      ";
    // taking input by user to append it to file
    float mile=0, hour=0;
    cout<<"Enter distance travelled (MILES): ";
    cin>>mile;
    cout<<"Enter duration of journey (HOURS): ";
    cin>>hour;
    // calling getData function
    getData(mile,hour);
    // writing input data to file
    MyFile<<"Miles travelled: "<<miles<<"       ";
    MyFile<<"Hours in trip: "<<hours<<"     ";
    MyFile<<"MPH: "<<miles/hour<<"      ";
    // closing the file
    MyFile.close();
    // opening the file in READ & WRITE mode
    MyFile.open("file.txt",ios::in);
    // MyText variable will store content of file.txt
    string MyText;
    // printint content of file.txt
    while(getline(MyFile,MyText)) {
        cout<<MyText;
    }
    return 0;
}