#include<iostream>
#include<climits>
using namespace std;
int main() {
    int n, maximum=INT_MIN, minimum=INT_MAX;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        maximum=max(arr[i],maximum);
        minimum=min(arr[i],minimum);
    }
    cout<<"Maximin: "<<maximum<<endl;
    cout<<"Minimum: "<<minimum<<endl;
    return 0;
}