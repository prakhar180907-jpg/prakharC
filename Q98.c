#include <stdio.h>
#include <string.h>


int main() {
    
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n') name[len - 1] = '\0';  

    int lastSpace = -1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("Output: ");
    for (int i = 0; i < lastSpace; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c", name[i]);
        }
    }

    
    printf(" %s\n", &name[lastSpace + 1]);

    return 0;
}