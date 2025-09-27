#include <stdio.h>


int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0], second = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    printf("Second largest element is: %d\n", second);
    return 0;
} 