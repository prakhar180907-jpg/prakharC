#include <stdio.h>


int main() {
    
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; 

    printf("Enter %d sorted integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to insert: ");
    scanf("%d", &key);

    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i]; t
        i--;
    }
    arr[i + 1] = key; 
    n++; 

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}