#include <stdio.h>

int main(){
    int side;
    int side1;
    int side2;
    int side3;
    
    printf("Please enter the lengths: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    if(side1>side2){
        side=side1;side1=side2;side2=side;
    }
    if(side1>side3){
        side=side1;side1=side3;side3=side;
    }
    if(side2>side3){
        side=side2;side2=side3;side3=side;
    }

    if((side1==side3))
    {
        printf("Regular triangle\n");
    }
    if((side1==side2)|(side2==side3))
    {
        printf("Isosceles triangle\n");
    }
    if(side1*side1+side2*side2==side3*side3)
    {
        printf("Rectangular triangle\n");
    }


}