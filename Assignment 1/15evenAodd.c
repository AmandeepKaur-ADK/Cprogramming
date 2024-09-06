#include <stdio.h>
int main(){
    int number = 0;
    printf("Enter a Number: ");
    scanf("%d", &number);
    if(number%2 ==0 ){
        printf("%d is even\n", number);
    }
    else{
        printf("%d is odd\n", number);
    }
    return 0;
}
