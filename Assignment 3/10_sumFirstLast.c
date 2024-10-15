#include <stdio.h>
int main(){
    int num, fd, ld, rem, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    ld = num %10;
    while(num != 0){
        rem = num %10;
        fd = rem;
        num /= 10;
    }
    printf("first digit: %d\n last digit: %d\n",fd,ld);
    //printf("",ld);
    sum = ld + fd;
    printf("sum: %d", sum);

return 0;
}
