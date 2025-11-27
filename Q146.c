#include <stdio.h>

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
    struct Employee e1;

  
    printf("Enter employee name: ");
    scanf("%49s", e1.name);

    printf("Enter employee ID: ");
    scanf("%d", &e1.emp_id);

    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d %d %d", &e1.joining_date.day, &e1.joining_date.month, &e1.joining_date.year);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e1.name);
    printf("Employee ID: %d\n", e1.emp_id);
    printf("Salary: %.2f\n", e1.salary);
    printf("Joining Date: %02d-%02d-%04d\n", e1.joining_date.day, e1.joining_date.month, e1.joining_date.year);

    return 0;
}