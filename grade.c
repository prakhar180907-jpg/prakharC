#include<stdio.h>
int main() {
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    if(percentage<0 || percentage>100) {
        printf("Invalid percentage");
    }
    if (percentage>90){
        printf("grade is: A+ \n");
    }else if (percentage>80){
            printf("grade is: A \n");
    }else if (percentage>70){
        printf("grade is: B \n");
    }else if (percentage>60){
        printf("grade is: C \n");
    }else if (percentage>60){
        printf("grade is: D \n");
    }else if (percentage>50){
        printf("grade is: E \n");
    }else {
        printf("fail");
    }
    return 0;
 
}


