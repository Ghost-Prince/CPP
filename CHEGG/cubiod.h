#include<stdio.h>
struct cubiod {
    int length;
    int width;
    int height;
    int volume;
    int surface_area;
};
void setCubiod(struct cubiod* c, int length, int width, int height) {
    c->length=length;
    c->width=width;
    c->height=height;
}
void CalculateVolume(struct cubiod* c) {
    c->volume = c->length * c->width * c->height;
}
void CalculateSurfaceArea(struct cubiod* c) {
    c->surface_area = 2*(c->length*c->width + c->width*c->height + c->length*c->height);
}
void printVolume(struct cubiod* c) {
    printf("Volume: %d\n", c->volume);
}
void printSurfaceArea(struct cubiod* c) {
    printf("Surface area: %d\n",c->surface_area);
}
int maxVolume(struct cubiod arr[], int n) {
    int maxi=-1;
    for(int i=0; i<n; i++) {
        if(maxi<arr[i].volume) {
            maxi=arr[i].volume;
        }
    }
    return maxi;
}