#include <stdio.h>
int main(){
    int number, rem, original;
    int reverse = 0;
    printf("Enter Number: ");
    scanf("%d",&number);
    //printf("%d", number);
    original = number;
    while(number != 0 ){
        rem = number %10;
        //printf("rem: %d\n",rem);
        reverse = (reverse*10) + rem;
        //printf("rev: %d\n",reverse);
        number = number/10;
        //printf("number: %d\n",number);
    }
    if(reverse == original){
        printf("%d is a Palindrome", original);
    }
    else{
        printf("%d is not a Palindrome", original);
    }
    return 0;
}
