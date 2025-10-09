#include <stdio.h>


int main() {

    int day, month, year;
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4) {
        printf("Formatted date: %02d-Apr-%d\n", day, year);
    } else {
        printf("Month is not April. Try again.\n");
    }

    return 0;
}