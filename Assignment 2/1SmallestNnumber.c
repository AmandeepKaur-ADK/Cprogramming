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
    int smallest = arr[0];
    for(int i = 0; i<size; i++){
        if(arr[i]< smallest){
            smallest = arr[i];
        }
    }
    printf("Smallest is %d", smallest);
return 0;
}
