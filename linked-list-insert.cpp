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
void inserthead(node* &head, int val) {
    node* temp=new node(val);
    temp->next=head;
    head=temp;
}
void insertTail(node* &head, int val) {
    if(head==NULL) {
        inserthead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next != NULL) {
        temp=temp->next;
    }
    temp->next=new node(val);
}
void display(node* head) {
    node* temp=head;
    while(temp != NULL) {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<" NULL"<<endl;
}
int main() {
    node* head1=new node(0);
    node* head2=new node(0);
    for(int i=0; i<5; i++) {
        int val=0;
        cout<<"Enter value: ";
        cin>>val;
        insertTail(head1,val);
        inserthead(head2,val);
    }
    display(head1);
    display(head2);
    return 0;
}