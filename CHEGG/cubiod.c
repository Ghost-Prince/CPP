#include "cubiod.h"
int main() {
    struct cubiod arr[4];
    for(int i=0; i<4; i++) {
        int l=0, w=0, h=0;
        printf("Enter length, width and height of cubiod number %d:\n",i+1);
        scanf("%d", &l);
        scanf("%d", &w);
        scanf("%d", &h);
        setCubiod(&arr[i],l,w,h);
        CalculateVolume(&arr[i]);
        CalculateSurfaceArea(&arr[i]);
    }
    int n=0;
    printf("Select a cubiod: ");
    scanf("%d",&n);
    printf("Vulume & Surface area of selected cubiod: \n");
    printVolume(&arr[n-1]);
    printSurfaceArea(&arr[n-1]);
    printf("Maximum volume: %d\n",maxVolume(arr,4));
    return 0;
}