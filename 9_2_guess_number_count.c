#include <stdio.h>

int main(){
    int answer=4;
    int guess;
    int count=0;

    while(count==0 || guess!=answer){
        printf("Please enter your guess\n");
        scanf("%d",&guess);
        count ++;
        if(guess>answer){
            printf("Too large\n");
        }
        else{
            printf("Too small\n");
        }
        
    }
    printf("Correct! (%d)\n",count);

}