#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int i;
    int ans;
    int guess;
    ans = rand() % 100;
    do{
        printf("Enter your guess: ");
        scanf("%d", &guess);
        if(guess > ans){
            printf("Too large!\n");
        }else if(guess < ans){
            printf("Too small!\n");
        }else{
            printf("Correct!\n");
        }
    }
    while(guess != ans);
    return 0;
}