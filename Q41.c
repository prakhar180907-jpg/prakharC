#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits = 0;
    int temp, middle, swapped;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    last = temp % 10;

    // Count total digits
    int count = num;
    while (count != 0) {
        count /= 10;
        digits++;
    }

    // Extract first digit
    temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    first = temp;

    // Remove first and last digits
    middle = num % (int)pow(10, digits - 1);  // Remove first digit
    middle /= 10;                             // Remove last digit

    // Rebuild number with swapped digits
    swapped = last * (int)pow(10, digits - 1) + middle * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);
    return 0;
}