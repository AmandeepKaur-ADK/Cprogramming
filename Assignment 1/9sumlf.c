#include <stdio.h>
int main(){
    int number;
    printf("Enter 3 digit Number: ");
    scanf("%d", &number);
    int lastDigit = number%10;
    int firstDigit =number/100;
    // 900 + 70 + 8 => 978 - 78 = > 900 /100
    printf("%d\n",firstDigit);
    printf("%d\n",lastDigit);
    int sum = 0;
    sum = firstDigit + lastDigit;
    printf("Sum is %d", sum);
    return 0;
}
