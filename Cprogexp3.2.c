//-----------------------------------Experiment 3.2: Loops--------------------------------------------------

//the user wants. At the end, it should display the
//count of positive, negative, and Zeroes entered.


/*#include <stdio.h>


int main() {

    int n, num;
    int positive = 0, negative = 0, zero = 0;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }

    printf("\nCount of Positive numbers: %d\n", positive);
    printf("Count of Negative numbers: %d\n", negative);
    printf("Count of Zeroes: %d\n", zero);

    return 0;
}*/



//WAP to print the multiplication table of the number entered by the user. It
//should be in the correct formatting. Num * 1 = Num
#include<stdio.h>


int main(){
    int i, num;

    printf("Enter the number whose multiplication table is to be printed:\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is:\n ", num);

    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }
    return 0;
}



//WAP to generate the following set of output.
//part a
#include<stdio.h>
int main(){

    int num=1;

    for(int row=1; row <= 3; row++){
        for(int col = 1;col <= row; col++){
        printf("%d ", num);
        num++;
}
printf("\n");
}
}

//part b

#include <stdio.h>


int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        int val = 1;

        for (int j = 0; j <= i; j++) {
            printf("%d ", val);

            val = val * (i - j) / (j + 1); 
        }
        printf("\n");
    }

    return 0;
}*/





//The population of a town is 100000. The population has increased steadily at
//the rate of 10% per year for the last 10 years. Write a program to determine
//the population at the end of each year in the last decade.
#include <stdio.h>

int main() {
    float population = 100000;

    printf("Year\tPopulation\n");
    for (int year = 1; year <= 10; year++) {
        population = population + (population * 0.10); 
        printf("%d\t%.0f\n", year, population); 
    }
    return 0;
}




//Ramanujan Number is the smallest number that can be expressed as the sum
//of two cubes in two different ways. WAP to print all such numbers up to a
//reasonable limit.
#include <stdio.h>

int main() {
    int limit = 100000;

    printf("Ramanujan Numbers up to %d:\n", limit);

    for (int a = 1; a * a * a < limit; a++) {
        for (int b = a + 1; a * a * a + b * b * b < limit; b++) {
            int sum1 = a * a * a + b * b * b;

            for (int c = a + 1; c * c * c < limit; c++) {
                for (int d = c + 1; c * c * c + d * d * d < limit; d++) {
                    int sum2 = c * c * c + d * d * d;

                    if (sum1 == sum2) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}

//---------------------------------------------------------------------------------------