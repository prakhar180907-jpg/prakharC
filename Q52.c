#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 13; i++) {
        printf("*\n");
        
        if (i == 1 || i == 4 || i == 9 || i == 12) {
            printf("\n");
        }
    }

    return 0;
}
