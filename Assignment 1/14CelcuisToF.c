#include <stdio.h>
int main(){
    int celsius = 0;
    printf("Enter temperature is Celsius: ");
    scanf("%d", &celsius);
    int fahrenheit = celsius*9/5 + 32;
    printf("%d Fahrenheit", fahrenheit);
    return 0;

}
