#include <stdio.h>
#include <stdlib.h>  


struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {

    struct Student *s1 = (struct Student *)malloc(sizeof(struct Student));

    if (s1 == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    printf("Enter name: ");
    scanf("%49s", s1->name);

    printf("Enter roll number: ");
    scanf("%d", &s1->roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1->marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", s1->name);
    printf("Roll No: %d\n", s1->roll_no);
    printf("Marks: %.2f\n", s1->marks);

    free(s1);

    return 0;
}