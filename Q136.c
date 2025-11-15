#include <stdio.h>

enum Operation { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    
    enum Operation choice;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf("1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;
        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;
        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}