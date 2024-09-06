#include <stdio.h>
int main(){
    char EmpID[5];
    int hours = 0;
    int amountPH = 0;
    printf("Enter 5 digit Employee ID: ");
    gets(EmpID);
    printf("Enter total worked hours of a month: ");
    scanf("%d", &hours);
    printf("Enter amount received per hour : ");
    scanf("%d", &amountPH);
    float salary = 0;
    salary = hours*amountPH;
    printf("Employee ID: %d\n", EmpID);
    printf("Salary for this month is %.2f", salary);

return 0;
}
