#include <stdio.h>


int main() {
    long num;
    int freq[10] = {0};

    printf("Enter an integer number: ");
    scanf("%ld", &num);

  
    while (num > 0) {
        int digit = num % 10;
        freq[digit]++;
        num =num / 10;
    }

    int maxFreq = 0, mostDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostDigit = i;
        }
    }

    printf("Digit that occurs most: %d (appears %d times)\n", mostDigit, maxFreq);

    return 0;
} 