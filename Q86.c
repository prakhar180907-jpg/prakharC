#include <stdio.h>


int main() {
    
    char str[1000];
    int i, j, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
   
    for (j = 0; str[j] != '\0'; j++);
    if (j > 0 && str[j - 1] == '\n') {
        j--;  
    }

    
    for (i = 0; i < j / 2; i++) {
        if (str[i] != str[j - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("It's a palindrome.\n");
    } else {
        printf("Not a palindrome.\n");
    }

    return 0;
}