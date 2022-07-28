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
    ~node() {
        cout<<"you killed a node bitch !"<<endl;
    }
};
void insert(node* &head, int val) {
    node* temp=new node(val);
    temp->next=head;
    head=temp;
}
void display(node* head) {
    node* temp=head;
    while(temp != NULL) {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void delete_node(node* &head, int key) {
    if(head->data == key) {
        node* temp=head;
        head=head->next;
        delete(temp);
        return;
    }
    node* temp=head;
    while(temp->next->data != key) {
        temp=temp->next;
        if(temp->next == NULL) {
            cout<<"key doesn't exist !"<<endl;
            return;
        }
    }
    node* p=temp->next;
    temp->next=temp->next->next;
    delete(p);
}
int main() {
    node* head=NULL;
    for(int i=0; i<5; i++) {
        int val=0;
        cin>>val;
        insert(head,val);
    }
    display(head);
    int key=0;
    cin>>key;
    delete_node(head,key);
    display(head);
    return 0;
}