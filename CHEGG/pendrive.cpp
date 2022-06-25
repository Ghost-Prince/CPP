#include<bits/stdc++.h>
using namespace std;
class pendrive {
    public:
    string brand;
    float storage;
    pendrive() { // default constructor
        this->brand="";
        this->storage=0.0;
    }
    pendrive(pendrive *pd) { // copy constructor
        this->brand=pd->brand;
        this->storage=pd->storage;
    }
    pendrive(string brand, float storage) { // parameterized constructor
        this->brand=brand;
        this->storage=storage;
    }
    ~pendrive() { // destructor
        cout<<"Object destroyed."<<endl;
    }
    void display(pendrive* pd) {
        cout<<"Brand: "<<pd->brand<<endl;
        cout<<"Storage: "<<pd->storage<<endl;
    }
    int storage_sum(vector<pendrive*>& array) {
        int sum=0;
        for(pendrive* pd: array) {
            sum+= pd->storage;
        }
        return sum;
    }
    bool check_same(pendrive* pd1, pendrive* pd2) {
        if(pd1->brand == pd2->brand) {
            if(pd1->storage == pd2->storage) {
                return true;
            }
        }
        return false;
    }
};
int main() {
    vector<pendrive*> array;
    pendrive *pd1= new pendrive("Sandisk", 64); // this object utilize parametrized constructor
    array.push_back(pd1);
    pendrive pd2(pd1); // this object utilize copy constructor
    array.push_back(&pd2);
    pendrive pd3("Moser Bear", 128); // this object utilize parametrized constructor
    array.push_back(&pd3);
    pendrive temp; // this object utilize default constructor. This object will be used to access functions of class
    cout<<"Details of all pendrives: "<<endl;
    temp.display(pd1);
    temp.display(&pd2);
    temp.display(&pd3);
    cout<<"Total storage: "<<temp.storage_sum(array)<<endl;
    cout<<"checking whether pd1 and pd2 are same or not."<<endl;
    if(temp.check_same(pd1, &pd2)) {
        cout<<"Both pendrives are same."<<endl;
    }
    else {
        cout<<"Both pendrives are not same."<<endl;
    }
    delete(pd1);
    return 0;
}