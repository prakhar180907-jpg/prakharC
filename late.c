#include<stdio.h>
int main()
{
    int day;
    printf("Number of days for late submisson: ");
    scanf("%d", &day);
    if(day <= 5)
    {
        printf("Fine in rupees: %d", 2*day);
    }
     else if(day > 5 && day <= 10)
    {
        printf("Fine in rupees: %d", 4*day);
    }
     else if(day > 10 && day <= 30)
    {
        printf("Fine in rupees: %d", 6*day);
    }
    else
    {
        printf("Membership Cancelled");
    }
}
