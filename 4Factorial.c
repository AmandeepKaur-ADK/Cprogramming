#include <stdio.h>
int main(){
    int num = 0;
    int fact = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i = num; i>0; i--){
        fact = fact * i;
    }
    printf("Factorial is %d\n",fact);
    return 0;
}
