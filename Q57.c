#include <stdio.h>
int main() {
    int size, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[50];

    printf("Enter %d elements: \n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i]; 
    }

    printf("Sum of array elements = %d\n", sum);


}
