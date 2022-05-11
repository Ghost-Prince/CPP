#include<bits/stdc++.h>
using namespace std;
class league {
    string name;
    string country;
    int year;
    public:
    league(string name, string country, int year) {
        this->name=name;
        this->country=country;
        this->year=year;
    }
    void display_info() {
        cout<<"Name of league: "<<this->name<<endl;
        cout<<"Name of country: "<<this->country<<endl;
        cout<<"Year: "<<this->year<<endl;
    }
};
class franchise {
    string name;
    string city;
    public:
    franchise() {
        this->name="";
        this->city="";
    }
    void setName(string name) {
        this->name=name;
    }
    void setCity(string city) {
        this->city=city;
    }
    string getName() {
        return this->name;
    }
    string getCity() {
        return this->city;
    }
};
class player {
    string name;
    int code;
    float age;
    public:
    player() {
        this->name="";
        this->code=0;
        this->age=0.0;
    }
    void setName(string name) {
        this->name=name;
    }
    void setCode(int code) {
        this->code=code;
    }
    void setAge(float age) {
        this->age=age;
    }
    string getName() {
        return this->name;
    }
    int getCode() {
        return this->code;
    }
    float getAge() {
        return this->age;
    }
    void setData() {
        cout<<"Enter name: ";
        cin>>this->name;
        cout<<"Enter code: ";
        cin>>this->code;
        cout<<"Enter age: ";
        cin>>this->age;
    }
    void displayData() {
        cout<<"Name: "<<this->name<<endl;
        cout<<"Code: "<<this->code<<endl;
        cout<<"Age: "<<this->age<<endl;
    }
};
class batsman : private player {
    int innings_played;
    float runs;
    float batting_average;
    public:
    batsman() {
        this->innings_played=0;
        this->runs=0.0;
        this->batting_average=0.0;
    }
    void setDataBatsman() {
        this->setData();
        cout<<"Enter innings played: ";
        cin>>this->innings_played;
        cout<<"Enter runs scored: ";
        cin>>this->runs;
    }
    float calculateBattingAverage() {
        this->batting_average= this->runs/this->innings_played*1.0;
        return this->batting_average;
    }
    void displayDataBatsman() {
        this->displayData();
        cout<<"Innings played: "<<this->innings_played<<endl;
        cout<<"Runs: "<<this->runs<<endl;
        cout<<"Batting Avetage: "<<this->batting_average<<endl;
    }
};
class bowler : public player {
    float runs_conceded;
    float overs;
    float bowling_average;
    public:
    bowler() {
        this->runs_conceded=0.0;
        this->overs=0.0;
        this->bowling_average=0.0;
    }
    void SetDataBowler() {
        this->setData();
        cout<<"Enter runs conceded: ";
        cin>>this->runs_conceded;
        cout<<"Enter overs: ";
        cin>>this->overs;
    }
    float calculateBowlingAverage() {
        this->bowling_average=this->runs_conceded/this->overs;
        return this->bowling_average;
    }
    void DisplayDataBowler() {
        this->displayData();
        cout<<"Runs conceded: "<<this->runs_conceded<<endl;
        cout<<"Overs: "<<this->overs<<endl;
        cout<<"Bowling average: "<<this->bowling_average<<endl;
    }
};
int main() {
    batsman bat1;
    bat1.setDataBatsman();
    bat1.calculateBattingAverage();
    bat1.displayDataBatsman();
    bowler bowl1;
    bowl1.SetDataBowler();
    bowl1.calculateBowlingAverage();
    bowl1.DisplayDataBowler();
    return 0;
}