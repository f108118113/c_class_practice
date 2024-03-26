#include <stdio.h>

int main(){
    int answer=4;
    int guess;
    printf("Please enter your guess\n");
    scanf("%d",&guess);
    while(guess!=answer){
        if(guess>answer){
            printf("Too large\n");
        }
        else{
            printf("Too small\n");
            }
        printf("Please enter your guess\n");
        scanf("%d",&guess);
    }
    printf("Correct\n");

}