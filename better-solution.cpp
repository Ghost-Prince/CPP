#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> nums;
    int size=0;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter "<<size<<" numbers: ";
    for(int i=0; i<size; i++) {
        int num=0;
        cin>>num;
        nums.push_back(num);
    }
    cout<<"Original array ---> ";
    for(int& num: nums) {
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"Array after replacing 2 with 5 ---> ";
    for(int& num: nums) {
        if(num==2) {
            num=5;
        }
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}
// time complexity = O(N) ; N = size of array

// Moussa's solution contains Merge sort.
// Time complexity of Merge sort = O(N*log(N)) ; N = size of array
// Therefore, this solution is faster than Moussa's solution.