#include <stdio.h>
int main() {
    long long binary, reversed = 0, onesComplement = 0;
    int digit;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    long long temp = binary;
    while (temp != 0) {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }
    while (reversed != 0) {
        digit = reversed % 10;
        if (digit == 0)
            onesComplement = onesComplement * 10 + 1;
        else if (digit == 1)
            onesComplement = onesComplement * 10 + 0;
        else {
            printf("Invalid binary digit found.\n");
            return 1;
        }
        reversed /= 10;
    }
    printf("1's Complement: %lld\n", onesComplement);
    return 0;
}
