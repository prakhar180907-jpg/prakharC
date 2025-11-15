#include <stdio.h>


int main(){
    
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];  
    int sum = 0;

    printf("Enter %d numbers between 0 to %d:\n", n - 1, n);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;
    int missing = total - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}