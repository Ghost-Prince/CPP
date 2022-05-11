#include<bits/stdc++.h>
using namespace std;
class VECTOR {
    vector<int> nums;
    int scaling_factor;
    public:
    VECTOR(vector<int>& arr, int& factor) {
        this->nums=arr;
        this->scaling_factor=factor;
    }
    void scaling() {
        for(int& num: this->nums) {
            num= num*(this->scaling_factor);
        }
    }
    void display() {
        for(int& num: this->nums) {
            cout<<num<<" ";
        }
        cout<<endl;
    }
};
int main() {
    int n=0;
    cout<<"Enter size of vector: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter elements of vector: ";
    for(int i=0; i<n; i++) {
        int x=0;
        cin>>x;
        arr.push_back(x);
    }
    int factor=0;
    cout<<"Enter scaling factor: ";
    cin>>factor;
    VECTOR vec(arr,factor);
    vec.scaling();
    cout<<"Vector after scaling: ";
    vec.display();
    return 0;
}