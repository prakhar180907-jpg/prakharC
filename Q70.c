#include <stdio.h>

int main() {
    int arr[100], n, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

  
    int temp[100];

   
    for (int i = 0; i < k; i++)
        temp[i] = arr[n - k + i];

    
    for (int i = k; i < n; i++)
        temp[i] = arr[i - k];

    
    for (int i = 0; i < n; i++)
        arr[i] = temp[i];

    printf("Array after right rotation:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}