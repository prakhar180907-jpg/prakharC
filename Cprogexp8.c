//-------------------------------------------Pointers------------------------------------------------

//Declare different types of pointers (int, float, char) and initialize them with the 
//addresses of variables. Print the values of both the pointers and the variables 
//they point to.

#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    // Declare pointers and initialize with addresses
    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    // Print values and addresses
    printf("Integer value: %d\n", a);
    printf("Pointer to int: %p\n", p1);
    printf("Value at pointer to int: %d\n\n", *p1);

    printf("Float value: %.2f\n", b);
    printf("Pointer to float: %p\n", p2);
    printf("Value at pointer to float: %.2f\n\n", *p2);

    printf("Char value: %c\n", c);
    printf("Pointer to char: %p\n", p3);
    printf("Value at pointer to char: %c\n", *p3);

    return 0;
}


//Perform pointer arithmetic (increment and decrement) on pointers of different 
//data types. Observe how the memory addresses change and the effects on 
//data access.

#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    float b[3] = {1.1, 2.2, 3.3};
    char c[3] = {'X', 'Y', 'Z'};

    int *p1 = a;
    float *p2 = b;
    char *p3 = c;

    printf("Initial pointer values and data:\n");
    printf("p1 = %p, *p1 = %d\n", p1, *p1);
    printf("p2 = %p, *p2 = %.1f\n", p2, *p2);
    printf("p3 = %p, *p3 = %c\n\n", p3, *p3);

    // Increment pointers
    p1++;
    p2++;
    p3++;

    printf("After increment:\n");
    printf("p1 = %p, *p1 = %d\n", p1, *p1);
    printf("p2 = %p, *p2 = %.1f\n", p2, *p2);
    printf("p3 = %p, *p3 = %c\n\n", p3, *p3);

    // Decrement pointers
    p1--;
    p2--;
    p3--;

    printf("After decrement (back to original):\n");
    printf("p1 = %p, *p1 = %d\n", p1, *p1);
    printf("p2 = %p, *p2 = %.1f\n", p2, *p2);
    printf("p3 = %p, *p3 = %c\n", p3, *p3);

    return 0;
}



//Write a function that accepts pointers as parameters. Pass variables by 
//reference using pointers and modify their values within the function.

#include <stdio.h>

// Function that modifies values using pointers
void modifyValues(int *x, float *y, char *z) {
    *x = *x + 10;       // Add 10 to integer
    *y = *y * 2;        // Double the float
    *z = 'A';           // Change char to 'A'
}

int main() {
    int a = 5;
    float b = 3.5;
    char c = 'X';

    printf("Before function call:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    // Pass variables by reference
    modifyValues(&a, &b, &c);

    printf("\nAfter function call:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);

    return 0;
}

