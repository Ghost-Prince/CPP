#include<bits/stdc++.h>
using namespace std;
float question1(int& n) {
    vector<int> nums;  //this vector will store 'n' random integers
    while(nums.size() != n) { //loop will run until the number of elements in 'nums' is less than 'n'
        int num=rand() % 101;
        if(num<50) { //if generated random integer is less than 50, then add 50 to it
            num+=50;
        }
        nums.push_back(num); // each element of nums will lie in range 50-100
    }
    float sum=0;
    for(int& num: nums) { // calculating sum of all elements of nums
        sum+=num;
    }
    return sum/n; // dividing the sum by size of nums (n) in order to obtain average
}
int main() {
    int n=0; // n will be the parameter of function 'question1'
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Result: "<<question1(n)<<endl; // calling the function
    return 0;
}