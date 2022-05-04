#include<bits/stdc++.h>
using namespace std;
double mean(vector<int>& arr) {
    return accumulate(arr.begin(),arr.end(),0) / 50;
}
double median(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int len=arr.size();
    if(len%2 != 0) {
        return (double)arr[len/2];
    }
    return (double)(arr[(len-1)/2] + arr[len/2]) / 2.0;
}
double mode(vector<int> arr) {
    int maxi= *max_element(arr.begin(),arr.end());
    vector<int> hash(maxi+1,0);
    for(int& num: arr) {
        hash[num]++;
    }
    int mode= max_element(hash.begin(),hash.end())-hash.begin();
    return (double)mode;
}
double standard_deviation(vector<int> arr, double MEAN) {
    double res=0;
    for(int& num: arr) {
        res+= (num-MEAN)*(num-MEAN);
    }
    res/=arr.size();
    return sqrt(res);
}
int main() {
    vector<int> nums;
    srand(time(NULL));
    while(nums.size()<50) {
        int temp=rand()%11;
        if(temp>0) {
            nums.push_back(temp);
        }
    }
    cout<<"Generated ataset: ";
    for(int& num: nums) {
        cout<<num<<" ";
    }
    cout<<endl;
    double MEAN=mean(nums);
    cout<<"Mean: "<<MEAN<<endl;
    cout<<"Median: "<<median(nums)<<endl;
    cout<<"Mode: "<<mode(nums)<<endl;
    cout<<"Standard deviation: "<<standard_deviation(nums,MEAN)<<endl;
    return 0;
}