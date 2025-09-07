#include<stdio.h>
int main()
{
    int i, n;
    unsigned long long product = 1;
    printf("Enter Positive integer n: ");
    scanf("%d", &n);
    if(n<2)
    {
        printf("No even numbers in the range 1 to %d.\n", n);
    }
    for(i = 2;i <= n; i += 2 )
    {
       product=product*i;
    }
   printf("Product of even natural numbers is: %llu\n", product);
}
