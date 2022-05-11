#include <bits/stdc++.h>
using namespace std;
class BookType
{
private:
    string title;
    string publisher;
    double rentalRate;
    long long int isbn;
    int year;
    int availableCopies;
public:
    BookType()
    {
        this->title = "N/A";
        this->publisher = "N/A";
        this->rentalRate = 0;
        this->isbn = 0;
        this->year = 0;
        this->availableCopies = 0;
    }
    BookType(long long int isbn,string title,string publisher,int year,double rentalRate,int availableCopies)
    {
        this->isbn = isbn;
        this->title = title;
        this->publisher = publisher;
        this->year = year;
        this->rentalRate = rentalRate;
        this->availableCopies = availableCopies;
    }

    void setBookTitle(string name) { this->title = name; }
    void setPublishing(string name1) { this->publisher = name1; }
    void setRentalPrice(double name2) { this->rentalRate = name2; }
    void setIsbnNumber(long long int name3) { this->isbn = name3; }
    void setYearPub(int name4) { this->year = name4; }
    void setCopies(int name5) { this->availableCopies = name5; }

    string getBookTitle() { return this->title; }
    string getPublishing() { return this->publisher; }
    double getRentalPrice() { return this->rentalRate; }
    long long int getIsbnNumber() { return this->isbn; }
    int getYearPub() { return this->year; }
    int getCopies() { return this->availableCopies; }

    void printBookInfo()
    {
        cout << "Title: " << this->title << endl;
        cout << "ISBN: " << this->isbn << endl;
        cout << "Publisher: " << this->publisher << endl;
        cout << " == Available copies: " << this->availableCopies << endl;
        cout << "Rental price: " << this->rentalRate << endl;
    }
    bool validateRental(vector<BookType>& array, long long int& isbn) {
        for(BookType& item: array) {
            if(item.getIsbnNumber()==isbn && item.getCopies()>0) {
                return true;
            }
        }
        return false;
    }
    void printRentedList(vector<BookType>& array) {
        for(BookType& item: array) {
            item.printBookInfo();
        }
    }
};
int main()
{
    BookType test;
    test.setBookTitle("C++ Programming: From Problem Analysis to Program Design");
    test.setPublishing("Cengage");
    test.setRentalPrice(50.40);
    test.setIsbnNumber(9781337102087L);
    test.setYearPub(2000);
    test.setCopies(5);
    int n=0;
    cout<<"Enter number of types of books: ";
    cin>>n;
    vector<BookType> array;
    array.push_back(test);
    for(int i=0; i<n; i++) {
        long long int isbn=0;
        cout<<"Enter ISBN number: ";
        cin>>isbn;
        string title="", publisher="";
        cout<<"Enter title: ";
        cin>>title;
        cout<<"Enter publisher: ";
        cin>>publisher;
        int year=0, copies=0;
        double rent=0;
        cout<<"Enter year of publication: ";
        cin>>year;
        cout<<"Enter rental rate: ";
        cin>>rent;
        cout<<"Enter number of copies available: ";
        cin>>copies;
        BookType temp(isbn,title,publisher,year,rent,copies);
        array.push_back(temp);
    }
    BookType temp;
    int m=0;
    cout<<"Enter number of books to be rented: ";
    cin>>m;
    vector<BookType> rented;
    for(int i=0; i<m; i++) {
        long long int isbn=0;
        cout<<"Enter ISBN number of book to rent: ";
        cin>>isbn;
        if(temp.validateRental(array,isbn)) {
            cout<<"Book is available."<<endl;
            for(BookType& item: array) {
                if(item.getIsbnNumber()==isbn) {
                    item.setCopies(item.getCopies()-1);
                    rented.push_back(item);
                    break;
                }
            }
            cout<<"Book rented."<<endl;
        }
        else {
            cout<<"Book is unavailable."<<endl;
        }
    }
    cout<<"List of rented books: "<<endl;
    temp.printRentedList(rented);
    return 0;
}