//-----------------Experiment 1: Installation, Environment Setup and starting with C language-------------

//Write a C program to print “ Hello World”
#include<stdio.h>
int main(){
    printf("Hello world");
}




//Write a C Program to print the address in multiple lines (new line)
#include<stdio.h>
int main() {
    printf("Name: Prakhar Shukla\n");
    printf("State: Uttar Pradesh\n");
     printf("District: Aligarh\n");
    printf("Address: 1/45 Ghanshyam Puri,Aligarh\n");
    printf("Street Number: 1\n");
  
}




//Write a program that prompts the user to enter their name and age.
#include<stdio.h>
int main(){
    char [50];
    int age;

    printf("Enter your name:\n");
    scanf(" %c", &name);

    printf("Enter your age: \n");
    scanf("%d", &age);

    printf("Hello you are %c, and you are %d years old. \n");
    
   return 0;
}


//Write a C program to add two numbers, take number from user
#include<stdio.h>
int main(){

    float num1,num2,sum=0;

    printf("Enter any two numbers: \n");
    scanf("%f %f", &num1, &num2);

    sum=num1 + num2;

    printf("Sum of the two numbers is: %f", sum);

        return 0;
}
//--------------------------------------------------------------------------------------------------