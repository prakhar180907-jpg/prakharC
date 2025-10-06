#include <stdio.h>
#include <string.h>


int isRotation(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2))
     return 0;

    char temp[200]; 
    strcpy(temp, str1);
    strcat(temp, str1);

    return strstr(temp, str2) != NULL;
}

int main() {
    char str1[] = "ABCD";
    char str2[] = "CDAB";

    if (isRotation(str1, str2))
        printf("Yes, it's a rotation.\n");
    else
        printf("No, it's not a rotation.\n");

    return 0;
}