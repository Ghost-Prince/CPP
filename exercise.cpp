#include<bits/stdc++.h>
using namespace std;
typedef struct funds {
    int id;
    char bank[10];
    float balance;
} fund;
float sum(fund * record) {
    static float total=0;
    total = total + record->balance;
    return total;
}
void Cust() {
    fund record1 = {1, "BOA ", 1023.43}; 
    fund record2 = {2, "Chase ", 4239.87};
    float s=0;
    s += sum(&record1);
    s += sum(&record2);
    printf("Customer has a total of $ %0.2f\n", s);
    return;
}
int main() {
    Cust();
    float cust[6] = {0, 1023.43, 4239.87, 0, 0, 0};
    float* p = cust;
    for (int i = 0; i < 6; i++) {
        cout<<"cust["<<i<<"]: balance is "<<*p<<" and address is "<<p<<endl;
        p++;
    }
    return 0;
}