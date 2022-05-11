#include<bits/stdc++.h>
using namespace std;
int i=1;
class music_article {
    int serial_number;
    string name;
    string atrist;
    string genre;
    int year;
    int no_times_access;
    public:
    music_article() {
        serial_number=i++;
        this->name="song1";
        this->atrist="MSS";
        this->year=1998;
        this->genre="carnatic";
        this->no_times_access=1;
    }
    void setName(string name) {
        this->name=name;
    }
    void setArtist(string artist) {
        this->atrist=artist;
    }
    void setGenre(string genre) {
        this->genre=genre;
    }
    void setYear(int year) {
        this->year=year;
    }
    void setNoOfAccess(int no_of_access) {
        this->no_times_access=no_of_access;
    }
    int getSerialNumber() {
        return this->serial_number;
    }
    string getName() {
        return this->name;
    }
    string getArtist() {
        return this->atrist;
    }
    string getGenre() {
        return this->genre;
    }
    int getYear() {
        return this->year;
    }
    int getNoOfAccess() {
        return this->no_times_access;
    }
};
void find(vector<music_article>& vec) {
    music_article temp;
    int maxi=INT_MIN;
    for(music_article& article: vec) {
        if(article.getNoOfAccess()>maxi) {
            maxi=article.getNoOfAccess();
            temp=article;
        }
    }
    cout<<"Serial number: "<<temp.getSerialNumber()<<endl;
    cout<<"Name: "<<temp.getName()<<endl;
    cout<<"Artist: "<<temp.getArtist()<<endl;
    cout<<"Year: "<<temp.getYear()<<endl;
    cout<<"Genre: "<<temp.getGenre()<<endl;
    cout<<"Number of access: "<<temp.getNoOfAccess()<<endl;
}
int main() {
    vector<music_article> vec;
    int n=0;
    cout<<"Enter number of music articles: ";
    cin>>n;
    for(int i=0; i<n; i++) {
        music_article music;
        string temp="";
        cout<<"Enter name: ";
        cin>>temp;
        music.setName(temp);
        cout<<"Enter artist: ";
        cin>>temp;
        music.setArtist(temp);
        cout<<"Enter genre: ";
        cin>>temp;
        music.setGenre(temp);
        int x=0;
        cout<<"Enter year: ";
        cin>>x;
        music.setYear(x);
        cout<<"Enter number of access: ";
        cin>>x;
        music.setNoOfAccess(x);
        vec.push_back(music);
    }
    cout<<"Finding article which is accessed maximum number of times: "<<endl;
    find(vec);
    return 0;
}