#include <stdio.h>
#include <string.h>


int main() {
    
    char s[1000], t[1000];
    printf("Enter first string: ");
    scanf("%s", s);
    printf("Enter second string: ");
    scanf("%s", t);

   
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    int count[26] = {0}; 

    
    for (int i = 0; s[i] != '\0'; i++)
        count[s[i] - 'a']++;

    
    for (int i = 0; t[i] != '\0'; i++)
        count[t[i] - 'a']--;

    
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}