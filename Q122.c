#include <stdio.h>


int main() {

    FILE *fptr;
    char line[100];

    fptr = fopen("info.txt", "r");  
    

    if(fptr == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    printf("Contents of info.txt:\n");

    while(fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);  
        
    }

    fclose(fptr);  

    return 0;
}