#include<bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;
};
bool comparator(pair<double,int> a, pair<double,int> b) {
    return a.first<b.first;
}
double fractionalKnapsack(int W, Item arr[], int n) {
    vector<pair<double,int>> vec;
    for(int i=0; i<n; i++) {
        double ratio= (arr[i].value*1.0)/(arr[i].weight*1.0);
        vec.push_back({ratio,i});
    }
    sort(vec.begin(),vec.end(),greater<pair<double,int>>());
    double ans=0;
    int s=0;
    for(int i=0; i<vec.size(); i++) {
        if(s+arr[vec[i].second].weight<W) {
            ans+= arr[vec[i].second].value;
            s+= arr[vec[i].second].weight;
        }
        else {
            double x=(W-s)*1.0;
            ans+= x*vec[i].first;
            break;
        }
    }
    return ans;
}
int main() {
    cout<<setprecision(2)<<fixed;
    int n=0, W=0;
    cin>>n>>W;
    Item arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i].value>>arr[i].weight;
    }
    cout<<fractionalKnapsack(W,arr,n)<<endl;
    return 0;
}