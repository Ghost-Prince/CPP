#include<bits/stdc++.h>
using namespace std;
class blanket { // create a class to store attributes of blanket
    string description; // this variable will store description of blanket
    float area; // this variable will store area of blanket
    public:
    blanket() { // this constructor will ask user to enter details of blanket
        cout<<"Enter description: ";
        cin.ignore();
        getline(cin,this->description);
        cout<<"Enter area: ";
        cin>>this->area;
    }
    string getDes() { // this function helps to access description of blanket which is private data member
        return this->description;
    }
    float getArea() { // this function helps to access area of blanket which is private data member
        return this->area;
    }
};
void display(vector<blanket>& array) { // this function accepts array of blankets & show their details
    fstream file; // this object will create a txt file to store details of each blanket
    file.open("Blanket.txt", ios::out);
    for(blanket& b: array) {
        cout<<"Description: "<<b.getDes()<<endl;
        cout<<"Area: "<<b.getArea()<<endl;
        file<<"Description: "<<b.getDes()<<" ";
        file<<"Area: "<<b.getArea()<<" ";
    }
    file.close();
}
int main() {
    int num=0;
    cout<<"Enter number of blanket: "; // asking user to enter number of blankets
    cin>>num;
    vector<blanket> array; // initializing array of blankets
    for(int i=0; i<num; i++) { // taking input to each object of blanket class
        blanket B;
        array.push_back(B); // adding each object to array
    }
    cout<<"Displaying details: "<<endl;
    display(array); // displaying details of each blanket
    return 0;
}