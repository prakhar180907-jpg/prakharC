#include <stdio.h>
#include <ctype.h>


int main() {
    
    FILE *fptr;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fptr = fopen("info.txt", "r"); 
    if(fptr == NULL) {
        printf("Error: File not found!\n");
        return 1;
    }

    while((ch = fgetc(fptr)) != EOF) {
        characters++;

        if(ch == '\n') {
            lines++;
        }

        if(isspace(ch)) {
            inWord = 0;
        } else if(inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    fclose(fptr);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}