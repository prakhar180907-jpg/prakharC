#include <stdio.h>

// Define a struct
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
 
    struct Student s1 = {101, "Prakhar", 89.5};

    struct Student *ptr = &s1;

    ptr->id = 102;                 
    ptr->marks = 92.3;            
   
    printf("Student ID: %d\n", ptr->id);
    printf("Student Name: %s\n", ptr->name);
    printf("Student Marks: %.2f\n", ptr->marks);

    return 0;
}