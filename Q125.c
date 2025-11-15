#include <stdio.h>


int main() {

    FILE *fptr;
    char text[100];

    fptr = fopen("info.txt", "a");  
    if(fptr == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    printf("Enter a new line to append: ");
    getchar();  
    fgets(text, sizeof(text), stdin); 
    fputs(text, fptr);  
    

    fclose(fptr);

    printf("Text appended successfully to info.txt\n");

    return 0;
}