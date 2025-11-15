#include <stdio.h>


int main() {
    
    char filename[100];
    FILE *fp;

  
    printf("Enter the filename: ");
    scanf("%s", filename);

   
    fp = fopen(filename, "r");

   
    if (fp == NULL) {
        printf("Error: File not found or cannot be opened.\n");
    } else {
        char ch;
        printf("File content:\n");
        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }
        fclose(fp);
    }

    return 0;
}