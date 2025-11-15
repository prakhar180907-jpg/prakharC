#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    
    enum Role role;

    role = ADMIN;

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Hello, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Hi, Guest! Please log in to access more features.\n");
            break;
        default:
            printf("Unknown role.\n");
    }

    return 0;
}