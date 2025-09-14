#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;
    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        float numerator = 2 * i - 1;
        float denominator = 2 * i;
        sum += numerator / denominator;
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);
    return 0;
}
