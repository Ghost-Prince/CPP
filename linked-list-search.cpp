#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int val) {
        this->data=val;
        this->next=NULL;
    }
};
void insert(node* &head, int val) {
    node* temp=new node(val);
    temp->next=head;
    head=temp;
}
bool search(node* head, int key) {
    for(node* temp=head; temp != NULL; temp=temp->next) {
        if(temp->data == key) {
            return true;
        }
    }
    return false;
}
void display(node* head) {
    node* temp=head;
    while(temp != NULL) {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main() {
    node* head=new node(0);
    head=NULL;
    for(int i=0; i<5; i++) {
        int val=0;
        cout<<"Enter value: ";
        cin>>val;
        insert(head,val);
    }
    display(head);
    int  key=0;
    cout<<"Enter key: ";
    cin>>key;
    cout<<search(head,key)<<endl;
    return 0;
}