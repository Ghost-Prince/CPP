#include<bits/stdc++.h>
using namespace std;
class TOYSTORE {
    public:
    string toy_name, manufacturer;
    void set_name(string name) {
        this->toy_name=name;
    }
    void set_manufacturer(string manufacturer) {
        this->manufacturer=manufacturer;
    }
};
class COST {
    public:
    float cost;
    void set_cost(float cost) {
        this->cost=cost;
    }
};
class SHOP: public TOYSTORE, public COST {
    public:
    string category;
    void set_category(string category) {
        this->category=category;
    }
};
unordered_map<string,vector<SHOP>> mp;
int main() {
    SHOP s1;
    s1.set_name("car");
    s1.set_manufacturer("hotwheels");
    s1.set_cost(50);
    s1.set_category("for boys");
    mp[s1.category].push_back(s1);
    SHOP s2;
    s2.set_name("doll");
    s2.set_manufacturer("barbie");
    s2.set_cost(30);
    s2.set_category("for girls");
    mp[s2.category].push_back(s2);
    for(auto& it: mp) {
        for(SHOP& shop: it.second) {
            cout<<shop.toy_name<<endl;
            cout<<shop.manufacturer<<endl;
            cout<<shop.cost<<endl;
            cout<<shop.category<<endl;
        }
        cout<<endl;
    }
    return 0;
}