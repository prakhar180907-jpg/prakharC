#include <stdio.h>
#include <ctype.h>  


int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for(int i = 0; str[i] != '\0'; i++) {
        if(i == 0) {
            str[i] = toupper(str[i]);  
        } else {
            str[i] = tolower(str[i]);  
        }
    }

    printf("Sentence case: %s", str);

    return 0;
}