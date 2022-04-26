#include<bits/stdc++.h>
using namespace std;
class node {
public:
    float data;
    node* next;
}*first=NULL;
void create(vector<float> arr, int n) {
    int i=0;
    node *t, *last;
    first=new node();
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(i=1; i<n; i++) {
        t=new node();
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(node* head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main() {
    int n=0;
    cout<<"Enter number of polynomial terms: ";
    cin>>n;
    int maxi=INT_MIN;
    unordered_map<float,float> mp;
    for(int i=0; i<n; i++) {
        float exp=0, coeff=0;
        cout<<"Enter exponent of term: ";
        cin>>exp;
        if(exp>maxi) {
            maxi=exp;
        }
        cout<<"Enter coefficient of term: ";
        cin>>coeff;
        mp[exp]=coeff;
    }
    vector<float> coefficients;
    for(int i=0; i<=maxi; i++) {
        coefficients.push_back(mp[i]);
    }
    create(coefficients, coefficients.size());
    cout<<"Polynomial: ";
    display(first);
    return 0;
}