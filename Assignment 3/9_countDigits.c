#include <stdio.h>
int main(){
    int number, rem, count = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    while(number != 0){
        rem = number %10;
        number /= 10;
        ++count;
    }
    printf("%d", count);
return 0;
}
