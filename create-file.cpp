#include<bits/stdc++.h>
using namespace std;
int main() {
    fstream my_file;
	my_file.open("test.txt", ios::out);
    cout<<"Enter your name: ";
    string name="";
    cin>>name;
    cout<<"Enter student id: ";
    int student_id=0;
    cin>>student_id;
    my_file<<name;
    my_file<<student_id;
    my_file.close();
    my_file.open("test.txt", ios::app);
    cout<<"Enter names of courses taken: ";
    for(int i=0; i<6; i++) {
        string course_name="";
        cin>>course_name;
        my_file<<course_name;
    }
    my_file.close();
    return 0;
}