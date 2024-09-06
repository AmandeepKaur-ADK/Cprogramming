#include <stdio.h>
int main(){
    int days = 0;
    int years = 0;
    int weeks = 0;
    printf("Enter Days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365)/7;
    days = (days % weeks);
    printf("Year: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}

