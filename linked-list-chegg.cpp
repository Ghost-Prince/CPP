#include<bits/stdc++.h>
using namespace std;
class IndexedList {
    private:
    string data;
    IndexedList* next;
    public:
    void setData(string data) {
        this->data=data;
    }
    void setNext(IndexedList* node) {
        this->next=node;
    }
    void insertInIndexedList(IndexedList* head, int pos, string data) {
        IndexedList* temp=new IndexedList;
        IndexedList* p=new IndexedList;
        if(pos==0) {
            temp->data=data;
            temp->next=head;
            head=temp;
        }
        else if(pos>0) {
            p=head;
            for(int i=0; i<pos-1 && p!=NULL; i++) {
                p=p->next;
            }
            if(p) {
                temp->data=data;
                temp->next=p->next;
                p->next=temp;
            }
        }
    }
    IndexedList* searchInIndexedList(IndexedList* head, string key) {
        IndexedList* start=head;
        while(start) {
            if(key==start->data) {
                return start;
            }
            start=start->next;
        }
        return NULL;
    }
    string deleteFromIndexedList(IndexedList* first, int pos) {
        IndexedList* p=new IndexedList;
        IndexedList* q=new IndexedList;
        string x="";
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
    void display(IndexedList* head) {
        IndexedList *start=head;
        while(start) {
            cout<<start->data<<" ";
            start=start->next;
        }
    }
    void displayNode(IndexedList* node) {
        cout<<node->data;
    }
} *head=NULL;
void create(string arr[], int n) {
    int i=0;
    IndexedList *t, *last;
    head=new IndexedList();
    head->setData(arr[0]);
    head->setNext(NULL);
    last=head;
    for(i=1; i<n; i++) {
        t=new IndexedList();
        t->setData(arr[i]);
        t->setNext(NULL);
        last->setNext(t);
        last=t;
    }
}
int main() {
    string arr[]={"Bobby","Joe","James","Kevin","Katherine","Stacy"};
    create(arr,6);
    cout<<"Created List: ";
    head->display(head);
    cout<<endl;
    head->insertInIndexedList(head,4,"Kalvin");
    cout<<"After inserting new data: ";
    head->display(head);
    cout<<endl;
    cout<<"Searching Katherine: ";
    head->displayNode(head->searchInIndexedList(head,"Katherine"));
    cout<<endl;
    head->deleteFromIndexedList(head,3);
    cout<<"After deleting a node: ";
    head->display(head);
    cout<<endl;
    return 0;
}