#include <stdio.h>


int main() {
    
    FILE *file = fopen("numbers.txt", "r");
    int num, sum = 0, count = 0;

    if (file == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found.\n");
    } else {
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", (float)sum / count);
    }

    return 0;
}