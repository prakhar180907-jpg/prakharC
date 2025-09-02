#include <stdio.h>
int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++) {
        int even = 2*i;  
        sum += even;
    }

    printf("Sum of the first %d even numbers is: %d\n", n, sum);

    return 0;
}

