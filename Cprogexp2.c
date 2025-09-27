//------------------------------------ Experiment 2: Operators------------------------------------------------------//


//WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.
#include<stdio.h>

int main(){

    float length, width, area, perimeter;
    printf("Enter length and width of your rectangle: \n");
    scanf("%f %f", &length, &width);

    area=length*width;
    printf("Required area: %f\n", area);

    perimeter=2*(length + width);
    printf("Required perimeter: %f\n", perimeter);

    return 0;

}


// WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.
#include<stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("Enter temprature in celsius: \n");
    scanf("%f", &celsius);

    fahrenheit=(celsius*9/5) + 32;

    printf("Temprature in fahrenheit is: %f\n", fahrenheit);

    return 0;

}

//----------------------------------------------------------------------------------------------------