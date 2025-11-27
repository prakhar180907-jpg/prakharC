#include <stdio.h>
#include <stdlib.h>

struct Date {
    int day;
    int month;
    int year;
};


struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    printf("Enter employee name: ");
    scanf("%49s", e1.name);

    printf("Enter employee ID: ");
    scanf("%d", &e1.emp_id);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e1.joining_date.day, &e1.joining_date.month, &e1.joining_date.year);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details from File ---\n");
    printf("Name: %s\n", e2.name);
    printf("Employee ID: %d\n", e2.emp_id);
    printf("Salary: %.2f\n", e2.salary);
    printf("Joining Date: %02d-%02d-%04d\n", e2.joining_date.day, e2.joining_date.month, e2.joining_date.year);

    return 0;
}