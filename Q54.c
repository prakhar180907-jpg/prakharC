#include <stdio.h>

int main() {
    int i, j, space;
    int n = 4;

    for (i = 1; i <= n; i++) {
        space = n - i;
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        space = n - i;
        for (j = 1; j <= space; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
