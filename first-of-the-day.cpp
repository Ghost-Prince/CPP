#include<bits/stdc++.h>
using namespace std;
double test_avg=0, assignment_avg=0;
int getID(string& ID) {
    return stoi(ID.substr(0,4));
}
string getName(string& completeName, string& firstname) {
    for(int i=0; i<completeName.length(); i++) {
        if(completeName[i]==' ') {
            return completeName.substr(i+1, completeName.length() - i - 1);
        }
    }
    return "";
}
double getAverage(vector<float>& assignment, vector<float>& test) {
    assignment_avg=accumulate(assignment.begin(),assignment.end(),0) / assignment.size();
    test_avg=accumulate(test.begin(),test.end(),0) / test.size();
    return test_avg;
}
double getTotal(vector<float>& assignment, vector<float>& test) {
    return accumulate(assignment.begin(),assignment.end(),0) + accumulate(test.begin(),test.end(),0);
}
void displayInfo(int ID,string lastname,string firstname,double avg_assignment,double avg_test,double total) {
    cout<<"Student ID: "<<ID<<", ";
    cout<<"first name "<<firstname<<" ";
    cout<<"and last name "<<lastname<<" ";
    cout<<"received an average of "<<avg_test<<" for tests and ";
    cout<<avg_assignment<<" for assignments and ";
    cout<<"the total grade is "<<total<<"/100 of COMP218.";
}
int main() {
    cout<<"Enter full name: ";
    string completeName="";
    getline(cin,completeName);
    string firstname="";
    for(int i=0; completeName[i] != ' '; i++) {
        firstname.push_back(completeName[i]);
    }
    cout<<"Enter ID: ";
    string ID="";
    cin>>ID;
    vector<float> assignment_array;
    cout<<"Enter number of assignments submitted: ";
    int assignment_submitted=0;
    cin>>assignment_submitted;
    cout<<"Enter grades of assignments: ";
    for(int i=0; i<assignment_submitted; i++) {
        float grade=0;
        cin>>grade;
        assignment_array.push_back(grade);
    }
    vector<float> test_array;
    cout<<"Enter number of tests: ";
    int number_of_tests=0;
    cin>>number_of_tests;
    cout<<"Enter grades of test: ";
    for(int i=0; i<number_of_tests; i++) {
        float grade=0;
        cin>>grade;
        test_array.push_back(grade);
    }
    string lastname = getName(completeName, firstname);
    int first_4_digits = getID(ID);
    double average_test=getAverage(assignment_array,test_array);
    double average_assignment=assignment_avg;
    double total = getTotal (assignment_array,test_array);
    cout<<"INFO: "<<endl;
    displayInfo(first_4_digits,lastname, firstname, average_assignment, average_test, total);
    return 0;
}