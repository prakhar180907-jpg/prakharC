#include<stdio.h>
int main()
 {
   float length, breadth;
   printf("Enter length and breadth");
   scanf("%f %f", &length,&breadth);
    float area=length*breadth;
   float perimeter=2*(length + breadth);
    printf("Area of rectangle is: %f\n", area);
   printf("Perimeter of rectangle is: %f\n",perimeter);
  
   return 0;


 }
