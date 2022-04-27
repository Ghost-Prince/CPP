#include<bits/stdc++.h>
using namespace std;
struct CD {
    string title;
    vector<string> names_of_performers;
    int number_of_track;
    int total_playtime;
    string genre;
};
vector<CD> collection, search_result;
void input(CD album) {
    cout<<"Enter title: ";
    cin>>album.title;
    int n=0;
    cout<<"Enter number of performers: ";
    cin>>n;
    cout<<"Enter names of performers: ";
    while(n--) {
        string name="";
        cin>>name;
        album.names_of_performers.push_back(name);
    }
    cout<<"Enter number of tracks: ";
    cin>>album.number_of_track;
    cout<<"Enter total playtime: ";
    cin>>album.total_playtime;
    cout<<"Enter genre: ";
    cin>>album.genre;
    collection.push_back(album);
}
void display(CD album) {
    cout<<"Title: "<<album.title<<endl;
    cout<<"Names of performers: ";
    for(string& name: album.names_of_performers) {
        cout<<name<<" ";
    }
    cout<<endl;
    cout<<"Number of tracks: "<<album.number_of_track<<endl;
    cout<<"Total playtime: "<<album.total_playtime<<endl;
    cout<<"Genre: "<<album.genre<<endl;

}
void search_artist(string& artist) {
    for(CD& album: collection) {
        for(string& name: album.names_of_performers) {
            if(name==artist) {
                search_result.push_back(album);
                return;
            }
        }
    }
}
void search_genre(string& genre_name) {
    for(CD& album: collection) {
        if(album.genre==genre_name) {
            search_result.push_back(album);
            return;
        }
    }
}
int main() {
    int n=0;
    cout<<"Enter number of albums: ";
    cin>>n;
    while(n--) {
        CD album;
        input(album);
    }
    int choice=0;
    cout<<"Enter 1 to search for artist AND 2 to search for genre: ";
    cin>>choice;
    if(choice==1) {
        string artist_name="";
        cout<<"Enter artist name: ";
        cin>>artist_name;
        search_artist(artist_name);
    }
    else if(choice==2) {
        string genre="";
        cout<<"Enter genre: ";
        cin>>genre;
        search_genre(genre);
    }
    cout<<"SEARCH RESULT: "<<endl;
    for(CD& album: search_result) {
        display(album);
    }
    return 0;
}