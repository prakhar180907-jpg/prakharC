//----------------------------------------- File Handling in C----------------------------------------

// Write a program to create a new file and write text into it.
#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Open file in write mode
    fp = fopen("output.txt", "w");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    // Get text input from user
    printf("Enter text to write into the file: ");
    scanf(" %[^\n]", text);  // Read string with spaces

    // Write text to file
    fprintf(fp, "%s\n", text);

    // Close the file
    fclose(fp);

    printf("Text written to file successfully.\n");

    return 0;
}



 
//Open an existing file and read its content character by character, and then 
//close the file
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Open the file in read mode
    fp = fopen("input.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: File could not be opened.\n");
        return 1;
    }

    printf("File content:\n");

    // Read and print each character until end of file
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}


//Open a file, read its content line by line, and display each line on the console.
#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];  // Buffer to hold each line

    // Open the file in read mode
    fp = fopen("input.txt", "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    printf("File content:\n");

    // Read and print each line until end of file
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);  // Print the line
    }

    // Close the file
    fclose(fp);

    return 0;
}