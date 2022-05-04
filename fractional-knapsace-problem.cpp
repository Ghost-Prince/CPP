#include<bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;
};
double fractionalKnapsack(int W, Item arr[], int n) {
    priority_queue<pair<float,Item>> pq;
    for(int i=0; i<n; i++) {
        float ratio=float(arr[i].value / arr[i].weight);
        pq.push({ratio,arr[i]});
    }
    double ans=0;
    while(!pq.empty()) {
        Item temp=pq.top().second;
        if(temp.weight<=W) {
            W-=temp.weight;
            ans+=temp.value;
        }
        else {
            ans+= float(W/temp.weight)*temp.value;
            break;
        }
        pq.pop();
    }
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