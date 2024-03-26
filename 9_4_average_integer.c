#include <stdio.h>

int main(){
    int sum=0;
    int count=0;
    float average;
    int num;
    printf("Please enter number (0:quit)\n");
    scanf("%d",&num);
    while(num!=0){
        sum = sum + num;
        count ++;
        scanf("%d",&num);
    }
    average=(float)sum/count;
    if(count!=0){
        printf("The average is %f\n", average);
    }
    else{
        printf("The average is N/A\n");
    }

}