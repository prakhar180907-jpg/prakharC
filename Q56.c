#include <stdio.h>
int main() {

    int size, i;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[50];

    printf("Enter %d elements: \n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entered elememts are: \n");
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
 

