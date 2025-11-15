#include <stdio.h>

enum Status { SUCCESS = 10, FAILURE, TIMEOUT };

int main() {
    
    enum Status s;

    for (s = SUCCESS; s <= TIMEOUT; s++) {
        printf("%d: ", s);
        switch (s) {
            case SUCCESS: printf("SUCCESS\n"); break;
            case FAILURE: printf("FAILURE\n"); break;
            case TIMEOUT: printf("TIMEOUT\n"); break;
        }
    }

    return 0;
}