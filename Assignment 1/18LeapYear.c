#include <stdio.h>
int main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    //printf("%d", year);
    if(year % 4 == 0 ){
        printf("%d is a Leap Year.", year);
    }else{
        printf("%d is not a Leap year", year);
    }
    return 0;
}
