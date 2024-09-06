#include <stdio.h>
int main(){
    int num = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    int sum = 0;
    while(1){
        int rem = num % 10;
        sum = sum*10 + rem;
        num = num/10;
        //printf("rem is %d\n", rem);
        //printf("sum is %d\n", sum);
        //printf("num is %d\n", num);

        if(num == 0){
                printf("Reverse of Number is %d", sum);
        break;
        }
    }

    return 0;
}
