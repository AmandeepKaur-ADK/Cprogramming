#include <stdio.h>
int main(){
    int number;
    printf("Enter 2 digit Number: ");
    scanf("%d", &number);
    int lastDigit = number%10;
    int firstDigit =number/10;
    // 80 + 9
    // (number - (lastDigit))/100
    int newNum = lastDigit*10 + firstDigit;
    printf("%d\n",newNum);

    return 0;
}
