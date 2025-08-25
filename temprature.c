 #include <stdio.h>
 int main()
 {
  float celsius, farenheit;
  printf("Enter temprature in celsius: ");
  scanf("%f", &celsius);
   farenheit =(9/5 * celsius ) +32;
   printf("%.2f celsius is equal to %.2f farenheit\n ", celsius, farenheit);
   return 0;
 }
