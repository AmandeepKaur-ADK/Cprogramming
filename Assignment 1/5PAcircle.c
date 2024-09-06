#include <stdio.h>
int main(){
    int radius = 6;
    int perimeter = 0;
    int area = 0;
    int pi = 3.14;
    perimeter = 2*pi*radius;
    area = pi*radius*radius;
    printf("Perimeter is %d\n", perimeter);
    printf("Area is %d", area);
    return 0;
}