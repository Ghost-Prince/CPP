// don't know why this code is not working

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
    priority_queue<pair<double,int>> pq;
    for(int i=0; i<n; i++) {
        double ratio= (arr[i].value*1.0 / arr[i].weight*1.0);
        pq.push({ratio,i});
    }
    double ans=0;
    int s=0;
    while(!pq.empty()) {
        if(s+arr[pq.top().second].weight<W) {
            ans+= arr[pq.top().second].value;
            s+= arr[pq.top().second].weight;
        }
        else {
            double x=(W-s)*1.0;
            ans+= x*pq.top().first;
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