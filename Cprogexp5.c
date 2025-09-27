//----------------------------Experiment 5:  Array-------------------------------


//WAP to read a list of integers and store it in a single dimensional array. Write a
//C program to print the second largest integer in a list of integers.

#include <stdio.h>


int main() {

    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0], second = arr[1];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    printf("Second largest number is: %d\n", second);
    return 0;
}*/



//WAP to read a list of integers and store it in a single dimensional array. Write a
//C program to count and display positive, negative, odd, and even numbers in an array

#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int positive = 0, negative = 0, odd = 0, even = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;

        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nPositive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);

    return 0;
}



//WAP to read a list of integers and store it in a single dimensional array. Write a
//C program to find the frequency of a particular number in a list of integers.

#include <stdio.h>


int main() {

    int n, freq, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the number to find frequency of: ");
    scanf("%d", &freq);

    for (int i = 0; i < n; i++) {
        if (arr[i] == freq)
            count++;
    }

    printf("Frequency of %d is: %d\n", freq, count);

    return 0;
}



//WAP that reads two matrices A (m x n) and B (p x q) and computes the product
//A and B. Read matrix A and matrix B in row major order respectively. Print both
//the input matrices and resultant matrix with suitable headings and output should
//be in matrix format only. Program must check the compatibility of orders of the
//matrices for multiplication. Report appropriate message in case of
//incompatibility.

#include <stdio.h>

int main() {
    int m, n, p, q;

    
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter rows and columns of Matrix B (p q): ");
    scanf("%d %d", &p, &q);

    
    if (n != p) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter elements of Matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

   
    printf("Enter elements of Matrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < q; j++)
            C[i][j] = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] =C[i][j] +A[i][k] * B[k][j];
            }
        }
    }

   
    printf("\nMatrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", A[i][j]);
        printf("\n");
    }

    
    printf("\nMatrix B (%d x %d):\n", p, q);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++)
            printf("%d\t", B[i][j]);
        printf("\n");
    }

    printf("\nProduct Matrix C (%d x %d):\n", m, q);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }

    return 0;
}
//-----------------------------------------------------------------------------------------------------