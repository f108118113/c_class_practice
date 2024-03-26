#include <stdio.h>

int main(){
    int sum=0;
    int num;
    printf("Please enter number (0:quit)\n");
    scanf("%d",&num);
    while(num!=0){
        sum = sum + num;
        scanf("%d",&num);
    }
    printf("The sum is %d\n",sum);

}