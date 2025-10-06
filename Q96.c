#include <stdio.h>
#include <string.h>
#include <ctype.h>


void reverse(char *str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    int i = 0, start = 0;
    while (str[i]) {
        if (str[i] == ' ' || str[i+1] == '\0') {
            int end = (str[i] == ' ') ? i - 1 : i;
            reverse(str, start, end);
            start = i + 1;
        }
        i++;
    }
}

int main() {
    char sentence[200] = "hello world this is C";
    reverseWords(sentence);
    printf("Reversed words: %s\n", sentence);
    return 0;
}