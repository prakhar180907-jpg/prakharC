//----------------------------------------- Functions---------------------------------------------//
 
//Develop a recursive and non-recursive function FACT(num) to find the 
//factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n) 
//= n * FACT(n-1). Using this function, write a C program to compute the 
//binomial coefficient. Tabulate the results for different values of n and r with 
//suitable messages.  

#include <stdio.h>

// Recursive factorial
long long fact_rec(int n) {
    if (n == 0)
        return 1;
    return n * fact_rec(n - 1);
}

// Non-recursive factorial
long long fact_nonrec(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

// Binomial coefficient using factorial
long long binomial(int n, int r, int use_rec) {
    long long fn, fr, fnr;
    if (use_rec) {
        fn = fact_rec(n);
        fr = fact_rec(r);
        fnr = fact_rec(n - r);
    } else {
        fn = fact_nonrec(n);
        fr = fact_nonrec(r);
        fnr = fact_nonrec(n - r);
    }
    return fn / (fr * fnr);
}

int main() {
    int use_rec;
    printf("Choose method:\n1. Recursive\n2. Non-Recursive\nEnter choice: ");
    scanf("%d", &use_rec);

    printf("\nBinomial Coefficient Table (C(n, r)):\n");
    printf("  n   r   C(n,r)\n");
    printf("---------------\n");

    for (int n = 0; n <= 5; n++) {
        for (int r = 0; r <= n; r++) {
            long long result = binomial(n, r, use_rec == 1);
            printf("%3d %3d %7lld\n", n, r, result);
        }
    }

    return 0;
}







// Develop a recursive function GCD (num1, num2) that accepts two integer 
//arguments. Write a C program that invokes this function to find the greatest 
//common divisor of two given integers

#include <stdio.h>


// Recursive function to find GCD
int GCD(int a, int b) {
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = GCD(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}


//Develop a recursive function FIBO (num) that accepts an integer argument. 
//Write a C program that invokes this function to generate the Fibonacci 
//sequence up to num.  

#include <stdio.h>

// Recursive Fibonacci function
int FIBO(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return FIBO(n - 1) + FIBO(n - 2);
}

int main() {
    int num;

    printf("Enter how many Fibonacci numbers to generate: ");
    scanf("%d", &num);

    printf("Fibonacci sequence up to %d terms:\n", num);
    for (int i = 0; i < num; i++) {
        printf("%d ", FIBO(i));
    }

    return 0;
}


//Develop a C function ISPRIME (num) that accepts an integer argument and 
//returns 1 if the argument is prime, a 0 otherwise. Write a C program that 
//invokes this function to generate prime numbers between the given ranges.  

#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int start, end;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    printf("Prime numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }

    return 0;
}


//Develop a function REVERSE (str) that accepts a string argument. Write a C 
//program that invokes this function to find the reverse of a given string. 

#include <stdio.h>
#include <string.h>


// Function to reverse a string
void REVERSE(char str[]) {
    int i, len = strlen(str);
    char temp;

    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  // reads a single word (no spaces)

    REVERSE(str);

    printf("Reversed string: %s\n", str);

    return 0;
}


