#include <stdio.h>


int main() {

    char str[1000];
    int i, j;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

   
    for (j = 0; str[j] != '\0'; j++);

   
    if (j > 0 && str[j - 1] == '\n') {
        j--;
    }

   
    for (i = 0, j = j - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}