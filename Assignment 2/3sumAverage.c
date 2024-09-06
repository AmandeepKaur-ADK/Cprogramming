#include <stdio.h>
int main(){
    int size = 0;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i<size; i++){
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<size; i++){
        printf("%d\n", arr[i]);
    }
    int sum = 0;
    for(int i = 0; i<size; i++){
        sum = sum + arr[i];
    }
    printf("Sum is %d\n", sum);
    int average = sum /size;
    printf("Average is %d\n", average);
return 0;
}
