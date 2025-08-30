#include<stdio.h>
int main(){
    float side1, side2, side3;
    printf("Enter sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    if((side1+side2>side3)&&(side1+side3>side2)&&(side2+side3>side1)){
        if(side1==side2 && side2==side3){
            printf("Triangle is equilatrial");
        }else if(side1==side2 || side2==side3 ||side3==side1){
            printf("Triangle is isoceles");
        }else{
            printf("Triangle is scaline");
        }
    }
}
