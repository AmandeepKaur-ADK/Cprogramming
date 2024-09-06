#include <stdio.h>
int main(){
    char small;
    printf("Enter Small Letter: ");
    scanf("%c", &small);
    int smallNumber = (int)small;
    int capNumber = smallNumber - 32;
    char capital = (char)capNumber;
    //printf("%d\n", smallNumber);
    //printf("%d\n", capNumber);
    printf("%c", capital);

    return 0;
}
