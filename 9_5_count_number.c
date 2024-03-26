#include <stdio.h>

int main(){

    int count;
    int number=1;
    printf("Please input number: ");
    scanf("%d",&count);
    while(number<=count)
    {
        printf("%d\n",number);
        number++;
    }
    return 0;
}