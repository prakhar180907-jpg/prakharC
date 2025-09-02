#include<stdio.h>
int main()
{
 int unit;
 printf("Units of Electricity consumed : ");
 scanf("%d", &unit);
 if(unit>0 && unit<100)
 {
    printf("Electricity bill in rupees: %d", 5*unit);
 }
 else if(unit >= 100 && unit<200)
 {
    printf("Electricity bill in rupees: %d", 7*unit);
 }
 else if(unit >=200 && unit<300)
 {
    printf("Electricity bill in rupees: %d", 10*unit);
 }
 else
 {
    printf("Electricity bill in rupees: %d", 12*unit);
 }

}
