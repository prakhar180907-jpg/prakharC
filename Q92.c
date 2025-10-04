#include <stdio.h>


int main() {

    char str[] = "prakhar";
    int freq[30] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] == 1) {
                printf("First repeating lowercase letter: %c\n", ch);
                return 0;
            }
            freq[ch - 'a']++;
        }
    }

    printf("No repeating lowercase letter found.\n");
    return 0;
}