#include<bits/stdc++.h>
using namespace std;
int main() {
	int N=0;
	cin>>N;
	int arr[N];
	for(int i=0; i<N; i++) {
		cin>>arr[i];
	}
	if(arr[N-1]%10==0) {
		cout<<"Yes"<<endl;
	} else {
		cout<<"No"<<endl;
	}
	return 0;
}