#include <stdio.h>


int main() {

    char str[] = "Hello World";
    char result[100]; 
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result[j++] = ch;
        }
    }
    result[j] = '\0';

    printf("Without vowels: %s\n", result);
    return 0;
}