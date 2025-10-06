#include <stdio.h>
#include <string.h>


int main() {
    
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;

    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            if (currLen == 0) start = i; 
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
    }

    
    if (currLen > maxLen) {
        maxLen = currLen;
        maxStart = start;
    }

    printf("Longest word: ");
    for (int i = maxStart; i < maxStart + maxLen; i++)
        putchar(sentence[i]);
    printf("\n");

    return 0;
}