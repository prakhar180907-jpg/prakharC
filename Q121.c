#include <stdio.h>


int main() {

    FILE *fptr;
    char name[50];
    int age;

    fptr = fopen("info.txt", "w"); 

    if(fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  

    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(fptr, "Name: %sAge: %d\n", name, age); 
    fclose(fptr);  

    printf("Data saved successfully to info.txt\n");

    return 0;
}