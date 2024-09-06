#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
     printf("First Number is %d\n", a);
      printf("Second Number is %d\n", b);
    return 0;
}
