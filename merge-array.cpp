#include<iostream>
using namespace std;
int main() {
    int a[5]={10,20,30,40,50};
    int b[7]={20,25,30,35,40,45,50};
    int c[5+7];
    int i=0, j=0, k=0;
    while(i<min(5,7) && j<min(5,7)) {
        if(a[i]<b[j]) {
            c[k++]=a[i++];
        }
        else if(b[j]<a[i]) {
            c[k++]=b[j++];
        }
        else if(a[i]==b[j]) {
            c[k++]=a[i++];
            c[k++]=b[j++];
        }
    }
    if(i!=4) {
        for( ; i<5; i++) {
            c[k++]=a[i];
        }
    }
    if(j!=6) {
        for( ; j<7; j++) {
            c[k++]=b[j];
        }
    }
    for(int i=0; i<5+7; i++) {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}