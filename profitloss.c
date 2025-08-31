#include<stdio.h>
int main()
{
    float sp, cp, profit, loss, percentage;
    printf("Enter Cost price: ");
    scanf("%f", &cp);

    printf("Enter Selling price: ");
    scanf("%f", &sp);

    if(sp>cp)
    {
        profit = sp-cp;
       percentage = (profit / cp)*100;
        printf("profit = %.2f\n",  percentage);
    }else if (cp>sp)
    {
        loss=cp-sp;
        percentage=(loss/cp)*100;
        printf("loss = %.2f\n",  percentage);
    }else
    printf("nor profit neither loss");
}