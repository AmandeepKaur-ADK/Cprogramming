#include <stdio.h>
int main(){
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;
    printf("Enter x1: ");
    scanf("%d",&x1);
    printf("Enter y1: ");
    scanf("%d",&y1);
    printf("Enter x2: ");
    scanf("%d",&x2);
    printf("Enter y2: ");
    scanf("%d",&y2);
    double distance = 0;
    int xd = (x2 - x1)*(x2 - x1);
    int yd = (y2 - y1)*(y2 - y1);
    int sum = xd + yd;
    distance = sqrt(sum);
    printf("Distance is %.2lf", distance);
return 0;
}
