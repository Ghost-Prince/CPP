#include<bits/stdc++.h>
using namespace std;
class Pets {
    char Gender;
    double Price;
    public:
    void setGender(char& gender) {
        this->Gender=gender;
    }
    void setPrice(double& price) {
        this->Price=price;
    }
    char getGender() {
        return this->Gender;
    }
    double getPrice() {
        return this->Price;
    }
};
class Dogs : public Pets {
    public:
    bool HouseTrained;
};
class Cats : public Pets {
    public:
    bool Claws;
};
class Fish : public Pets {
    public:
    int GallonReq;
};
int main() {
    vector<Dogs> dogs;
    vector<Cats> cats;
    vector<Fish> fishes;
    int choice=0;
    while(choice != 5) {
        cout<<"Press 1. to add Dog"<<endl;
        cout<<"Press 2. to add fish"<<endl;
        cout<<"Press 3. to add Cat"<<endl;
        cout<<"Press 4. to display all pets"<<endl;
        cout<<"Enter 5. to exit"<<endl;
        cin>>choice;
        if(choice==1) {
            Dogs dog1;
            cout<<"Enter gender: ";
            char gender='a';
            cin>>gender;
            dog1.setGender(gender);
            cout<<"Enter price: ";
            double price=0;
            cin>>price;
            dog1.setPrice(price);
            cout<<"Is the dog house trained: ";
            cin>>dog1.HouseTrained;
            dogs.push_back(dog1);
        }
        if(choice==2) {
            Fish fish1;
            cout<<"Enter gender: ";
            char gender='a';
            cin>>gender;
            fish1.setGender(gender);
            cout<<"Enter price: ";
            double price=0;
            cin>>price;
            fish1.setPrice(price);
            cout<<"Enter GallonReq: ";
            cin>>fish1.GallonReq;
            fishes.push_back(fish1);
        }
        if(choice==3) {
            Cats cat1;
            cout<<"Enter gender: ";
            char gender='a';
            cin>>gender;
            cout<<"Enetr price: ";
            double price=0;
            cin>>price;
            cat1.setPrice(price);
            cout<<"Does the cat has claws: ";
            cin>>cat1.Claws;
            cats.push_back(cat1);
        }
        if(choice==4) {
            for(Dogs& dog: dogs) {
                cout<<"DOG:"<<endl;
                cout<<"Gender: "<<dog.getGender()<<endl;
                cout<<"Price: "<<dog.getPrice()<<endl;
                cout<<"House Trained: "<<dog.HouseTrained<<endl;
            }
            for(Cats& cat: cats) {
                cout<<"CAT:"<<endl;
                cout<<"Gender: "<<cat.getGender()<<endl;
                cout<<"Price: "<<cat.getPrice()<<endl;
                cout<<"Claws: "<<cat.Claws<<endl;
            }
            for(Fish& fish: fishes) {
                cout<<"FISH:"<<endl;
                cout<<"Gender: "<<fish.getGender()<<endl;
                cout<<"Price: "<<fish.getPrice()<<endl;
                cout<<"Gallons Req: "<<fish.GallonReq<<endl;
            }
        }
    }
    return 0;
}