//------------------------------------ Conditional Statements----------------------------------------//
//------------------------------------- EXP 3.1 Loops --------------------------------------------- //

//WAP to take check if the triangle is valid or not. If the validity is established, do 
//check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides
//of the triangle as input from a user.


#include<stdio.h>

int main(){

    int a, b, c;

    printf("Enter the sides of triangle,Prakhar: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a == b && b == c ){
        printf("Prakhar the given triangle is equilateral: \n");
    }

    else if(a == b || b == c || c == a){
        printf("Prakhar the given triangle is isoceles: \n");
    }
    
    else if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
        printf("Prakhar the given triangle is right angled triangle: \n");
    }
    else{
        printf("Given triangle is scalene triangle: \n");
    }
    return 0;
}



//WAP to compute the BMI Index of the person and print the BMI values as per
//the following ranges. You can use the following formula to compute BMI=
//weight(kgs)/Height(Mts)*Height(Mts).


#include<stdio.h>

int main(){

        float height , weight , BMI;
        
        printf("Enter your height(Mtr) and weight(Kgs): \n");
        scanf("%f %f", &height, &weight);

        BMI = weight / (height*height);

        if( BMI < 15){
            printf("Starvation\n");
        }
        else if( BMI > 15.1 && BMI < 17.5 ){
            printf("Anorexic\n");
        }
        else if( BMI < 17.6 && BMI > 18.5){
            printf("Underweight\n");
        }
        else if( BMI > 18.6 && BMI < 24.9){
            printf("Ideal\n");
        }
        else if( BMI > 25 && BMI < 25.9){
            printf("Overweight\n");
        }
        else if( BMI > 30 && BMI < 39.9){
            printf("Obese\n");
        }
        else if( BMI > 40){
            printf("Morbidity Obese");
        }

        return 0;
}



//WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.


# include<stdio.h>

int main()
{
 float x1, y1, x2, y2, x3, y3;
 float area ;

printf("Enter coordinates of first point (x1,y1)");
scanf("%f %f" ,&x1, &y1);

 printf("Enter coordinates of second point (x2,y2)");
 scanf("%f %f" ,&x2, &y2);

 printf("Enter coordinates of third point (x3,y3)");
 scanf("%f %f" ,&x3, &y3);

if ((y2-y1)*(x3-x2) == (y3-y2)*(x2-x1)){
    printf("The points are collinear");
}else {
    printf("The points are not collinear ");
}
return 0;
}

//According to the gregorian calendar, it was Monday on the date 01/01/01. If
//Any year is input through the keyboard write a program to find out what is the
//day on 1st January of this year.

#include <stdio.h>

int main() {

    int year, totaldays = 0;

    printf("Enter the year Prakhar: ");
    scanf("%d", &year);

    for (int i = 1; i < year; i++) {
       
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
            totaldays =totaldays + 366;
        else
            totaldays =totaldays + 365;
    }

    int day = totaldays % 7;

    switch(day) {
        case 0: printf("1st January %d is Monday\n", year); break;
        case 1: printf("1st January %d is Tuesday\n", year); break;
        case 2: printf("1st January %d is Wednesday\n", year); break;
        case 3: printf("1st January %d is Thursday\n", year); break;
        case 4: printf("1st January %d is Friday\n", year); break;
        case 5: printf("1st January %d is Saturday\n", year); break;
        case 6: printf("1st January %d is Sunday\n", year); break;
    }

    return 0;
}



//WAP using ternary operator, the user should input the length and breadth of a
//rectangle, one has to find out which rectangle has the highest perimeter. The
//minimum number of rectangles should be three


#include <stdio.h>


int main()
{
    float L1, B1 , L2, B2, L3, B3;

    printf("Enter length and breath of reactangle 1: ");
    scanf("%f %f" , &L1 , &B1);

    printf("Enter length and breath of reactangle 2: ");
    scanf("%f %f" , &L2 , &B2);

    printf("Enter length and breath of reactangle 3: ");
    scanf("%f %f" , &L3 , &B3);

    float perimeter1 =2*(L1+B1);
    float perimeter2 =2*(L2+B2);
    float perimeter3 =2*(L3+B3);
    float maxp = (perimeter1 > perimeter2) ? (perimeter1 > perimeter3 ? perimeter1 : perimeter3) : (perimeter2 > perimeter3 ? perimeter2 : perimeter3);

    printf("Maximum perimter is of: %f", maxp);

}

//-------------------------------------------------------------------------------------------------------

