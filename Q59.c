#include <stdio.h>
int main() {
    int size, i;
    int arr[50];
    int evenCount = 0, oddCount = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
    printf("Total Even Numbers = %d\n", evenCount);
    printf("Total Odd Numbers = %d\n", oddCount);

}
