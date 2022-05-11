#include<stdio.h>
struct Cubiod {
    int length;
    int breadth;
    int height;
};
int volume(struct Cubiod cub) {
    return cub.length * cub.breadth * cub.height;
}
int surface_area(struct Cubiod cub) {
    return 2*(cub.length*cub.breadth + cub.breadth*cub.height + cub.length*cub.height);
}