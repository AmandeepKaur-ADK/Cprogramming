#include <stdio.h>
int main(){
    char name[10];
    char dob[20];
    char mobile[10];
    printf("Enter your name: ");
    printf("Name is %s\n", gets(name));
    printf("Enter your Date of Birth: ");
    printf("Your Date of Birth is %s\n", gets(dob));
    printf("Enter your Mobile Number: ");
    printf("Your Mobile number is %s\n", gets(mobile));
    printf("%s\n", name);
    printf("%s\n", dob);
    printf("%s\n", mobile);
    return 0;
}
