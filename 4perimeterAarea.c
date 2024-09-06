#include <stdio.h>
int main(){
    int length = 7;
    int width = 5;
    int perimeter = 0;
    int area = 1;
    perimeter = 2*(length + width);
    area = length*width;
    printf("perimeter is %d\n", perimeter);
    printf("area is %d", area);

    return 0;
}
