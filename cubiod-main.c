#include "Cubiod.h"
int main() {
    struct Cubiod cub;
    printf("Enter length, breadth and height: ");
    scanf("%d%d%d", &cub.length, &cub.breadth, &cub.height);
    printf("Volume of Cubiod: %d\n", volume(cub));
    printf("Surface area of Cubiod: %d\n", surface_area(cub));
    return 0;
}