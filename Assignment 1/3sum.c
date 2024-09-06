#include <stdio.h>
int main(){
    int a, b;
    int sum = 0;
    int product = 1;
    printf("Enter the number 1: ");
    scanf("%d", &a);
    printf("Enter the number 2: ");
    scanf("%d", &b);
    sum = a + b;
    product = a*b;
    printf("Sum is %d\n", sum);
    printf("Product is %d\n", product);
    return 0;
}
