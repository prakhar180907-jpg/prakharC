#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        float numerator = 2.0 * i;
        float denominator = 4.0 * i - 1;
        float term = numerator / denominator;
        sum += term;

        printf("Term %d: %.2f / %.2f = %.4f\n", i, numerator, denominator, term);
    }

    printf("\nSum of the series up to %d terms = %.4f\n", n, sum);
}
