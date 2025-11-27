#include <stdio.h>


enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {

    struct Person p1 = {"Prakhar", 18, MALE};
 
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);

    switch (p1.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
    }

    return 0;
}