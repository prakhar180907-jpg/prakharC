#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    int roll_no;
    float marks;
};


int areEqual(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 && 
        s1.roll_no == s2.roll_no && 
        s1.marks == s2.marks) {
        return 1; 
    }
    return 0;     
}

int main() {
    struct Student st1, st2;

    printf("Enter details of first student:\n");
    printf("Name: ");
    scanf("%49s", st1.name);
    printf("Roll No: ");
    scanf("%d", &st1.roll_no);
    printf("Marks: ");
    scanf("%f", &st1.marks);

    printf("\nEnter details of second student:\n");
    printf("Name: ");
    scanf("%49s", st2.name);
    printf("Roll No: ");
    scanf("%d", &st2.roll_no);
    printf("Marks: ");
    scanf("%f", &st2.marks);

    if (areEqual(st1, st2)) {
        printf("\nBoth students are IDENTICAL.\n");
    } else {
        printf("\nStudents are DIFFERENT.\n");
    }

    return 0;
}