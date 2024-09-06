#include <stdio.h>
int main(){
    char capital;
    printf("Enter Capital Letter: ");
    scanf("%c", &capital);
    int capNumber = (int)capital;
    int smallNumber = capNumber + 32;
    char small = (char)smallNumber;
    //printf("%d\n", capNumber);
    //printf("%d\n", smallNumber);
    printf("%c", small);

    return 0;
}
