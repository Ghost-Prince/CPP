#include<bits/stdc++.h>
using namespace std;
class node {
public:
    int data;
    node* next;
}*first=NULL, *second=NULL;
// This function creates new linked list from elements of an array
void create(int arr[], int n) {
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
// This function creates second linked list
void create2nd(int arr[], int n) {
    int i=0;
    node *t, *last;
    second=new node();
    second->data=arr[0];
    second->next=NULL;
    last=second;
    for(i=1; i<n; i++) {
        t=new node();
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
// This function displays linked list
void display(node* head) {
    while(head!=NULL) {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
// This function finds length of linked list
int length(node* head) {
    int len=0;
    while(head!=NULL) {
        len++;
        head=head->next;
    }
    return len;
}
// This function finds sum off all elements of linked list
int sum(node* head) {
    int sum=0;
    while(head) {
        sum+=head->data;
        head=head->next;
    }
    return sum;
}
// This function finds maximum element if linked list
int maximum(node* head) {
    int maxi=INT_MIN;
    while(head) {
        maxi=max(maxi, head->data);
        head=head->next;
    }
    return maxi;
}
// This function finds minimum element of linked list
int minimum(node* head) {
    int mini=INT_MAX;
    while(head) {
        mini=min(mini, head->data);
        head=head->next;
    }
    return mini;
}
// This function search given element in linked list
node* search(node* head, int key) {
    while(head) {
        if(key==head->data) {
            return head;
        }
        head=head->next;
    }
    return NULL;
}
// Insert a node in linked list
void insert(node* head, int pos, int val) {
    node* temp=new node;
    node* p=new node;
    if(pos==0) {
        temp->data=val;
        temp->next=first;
        first=temp;
    }
    else if(pos>0) {
        p=first;
        for(int i=0; i<pos-1 && p!=NULL; i++) {
            p=p->next;
        }
        if(p) {
            temp->data=val;
            temp->next=p->next;
            p->next=temp;
        }
    }
}
// Inserting in a sorted linked list
void insertSorted(node* head, int val) {
    node* q=NULL;
    while(head!=NULL && head->data < val) {
        q=head;
        head=head->next;
    }
    node* temp=new node;
    temp->data=val;
    temp->next=q->next;
    q->next=temp;
}
// Deleting a node from linked list
// This function returns data at deleted node
int deleteNode(int pos) {
    node* p=new node;
    node* q=new node;
    int x=-1;
    if(pos==1) {
        x=first->data;
        p=first;
        first=first->next;
        delete p;
    }
    else if(pos>1) {
        p=first;
        q=NULL;
        for(int i=0; i<pos-1 && p!=NULL; i++) {
            q=p;
            p=p->next;
        }
        if(p) {
            q->next=p->next;
            x=p->data;
            delete p;
        }
    }
    return x;
}
// Check if a given linked list is sorted
bool isSorted(node* head) {
    node* p=head;
    int x=INT_MIN;
    while(p) {
        if(p->data<x) {
            return false;
        }
        x=p->data;
        p=p->next;
    }
    return true;
}
// Concatenate two linked lists
node* concatenate(node* list1, node* list2) {
    node* p=list1;
    while(p->next) {
        p=p->next;
    }
    p->next=list2;
    return list1;
}
// This function merges two sorted linked list into single sorted linked list
node* merge(node* p, node* q) {
    node* last;
    node* third;
    node* start;
    if(p->data > q->data) {
        start=q;
    }
    else {
        start=p;
    }
    if(p->data < q->data) {
        third=last=p;
        p=p->next;
        third->next=NULL;
    }
    else if(p->data > q->data) {
        third=last=q;
        q=q->next;
        third->next=NULL;
    }
    while(p && q) {
        if(p->data < q->data) {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else {
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p) last->next=p;
    if(q) last->next=q;
    return start;
}
int main() {
    int arr[]={10,20,30,40,50};
    create(arr,5);
    int arr2[]={5,15,25,35,45};
    create2nd(arr2,5);
    node* merged=merge(first,second);
    display(merged);
    return 0;
}