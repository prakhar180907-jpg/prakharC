#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float discriminant,root1,root2,realPart,imaginaryPart;
    printf("Enter values of coefficients a,b and c: ");
    scanf("%f", &a,&b,&c);
    discriminant=pow(b,2)- 4*a*c;
    if(discriminant>0)
    //Real and Distinct roots exist
    {
    root1=-b+sqrt(discriminant)/(2*a);
    root2=-b-sqrt(discriminant)/(2*a);
    printf("Roots are Real and Distinct");
    printf("Root 1=%.2f", root1);
    printf("Root 2=%.2f", root2);
    }else if(discriminant == 0)
    //Real and Equal Roots 
    {
    root1=-b/(2*a);
    printf("Roots are real and equal");
    printf("Root 1=%.2f", root1);
    printf("Root 2=%.2f", root2);
    }else
    //Complex Roots Exists
    {
      realPart = -b / (2*a);
      imaginaryPart = sqrt(-discriminant) / (2*a);
      printf("Roots are complex/n");
      printf("Root 1=%.2f + %.2fi\n", realPart, imaginaryPart);
     printf("Root 2=%.2f - %.2fi\n", realPart, imaginaryPart);
    }
}
