#include <stdio.h>
int main(){
    char value;
     printf("Enter character: ");
     scanf("%c", &value);
    int ascii = (int)value;
    printf("ASCII value is %d", ascii);
    return 0;
}
