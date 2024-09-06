#include <stdio.h>
int main(){
    float num1 = 0;
    float num2 = 0;
    printf("Enter first float number: ");
    scanf("%f", &num1);
    printf("Enter first float number: ");
    scanf("%f", &num2);
    float sum = num1 + num2;
    float average = sum / 2;
    printf("%.2f is average", average);
    return 0;
}
