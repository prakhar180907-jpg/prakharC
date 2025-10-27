#include <stdio.h>
#include <string.h>


int main() {

    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int maxLen = 0;
    int start = 0;
    int lastIndex[256]; 
   
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        if (lastIndex[s[i]] >= start)
            start = lastIndex[s[i]] + 1;

        lastIndex[s[i]] = i;

        int currentLen = i - start + 1;
        if (currentLen > maxLen)
            maxLen = currentLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}