#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    int temp = a;
    a = b;
    b = temp;
    printf("First Number is %d\n", a);
    printf("Second Number is %d\n", b);

}
