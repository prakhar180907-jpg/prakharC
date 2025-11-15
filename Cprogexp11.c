//------------------------------------------ Bitwise Operator-------------------------------------

//Write a program to apply bitwise OR, AND and NOT operators on bit level.

#include<stdio.h>

int main(){

    int a,b;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("BITWISE OR: %d\n",a | b);
    printf("BITWISE AND: %d\n", a & b);
    printf("BITWISE NOT: %d\n",~a);

    return 0;
}


//Write a program to apply left shift and right shift operator.
#include<stdio.h>

int main(){
    int num=8;
    int leftShift = num << 2;
    int rightShift = num >> 2;

    printf("orignal number: %d\n", num);
    printf("After leftshift by 2: %d\n", leftShift);
    printf("After rightShift by 2: %d\n", rightShift);
    return 0;
}