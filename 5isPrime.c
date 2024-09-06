#include <stdio.h>
int main(){
    int num = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i = 2; i<num; i++){
        if(num%i == 0){
             printf("%d is not a prime number", num);
             break;
        }
          else{
            printf("%d is a Prime number", num);
            break;
          }
    }

return 0;
}
