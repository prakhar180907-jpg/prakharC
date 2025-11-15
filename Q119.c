#include <stdio.h>


int main() {

    int n;
    printf("Enter size of array (n): ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    printf("Enter %d numbers (0 to %d, one repeated):\n", n, n - 2);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
        
    }

    int expected = (n - 2) * (n - 1) / 2;
    int repeated = sum - expected;

    printf("Repeated number is: %d\n", repeated);

    return 0;
}