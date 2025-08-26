#include <stdio.h>

int main() {
    int a = 5, b = 10;

     printf("Before swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}



