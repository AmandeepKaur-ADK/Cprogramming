#include <stdio.h>
int main(){
    float radius = 6;
    float perimeter = 0;
    float area = 0;
    float pi = 3.14;
    perimeter = 2*pi*radius;
    area = pi*radius*radius;
    printf("Perimeter is %f\n", perimeter);
    printf("Area is %f", area);
    return 0;
}
