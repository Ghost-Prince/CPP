#include<stdio.h>
int main() {
    int datanum[12]={31,28,29,25,31,22,34,35,38,21,29,30};
    int maxi=-1;
    for(int i=0; i<12; i++) {
        if(datanum[i]>maxi) {
            maxi=datanum[i];
        }
    }
    int dataassorted[9]={1,5,15,20,27,36,38,40};
    dataassorted[8]=maxi;
    int counter=1;
    while(counter<9) {
        for(int j=0; j<9-counter; j++) {
            if(dataassorted[j]>dataassorted[j+1]) {
                int temp=dataassorted[j];
                dataassorted[j]=dataassorted[j+1];
                dataassorted[j+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0; i<9; i++) {
        printf("%d ",dataassorted[i]);
    }
    return 0;
}