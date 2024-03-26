#include <stdio.h>

int main(){
    int answer=4;
    int guess;

    printf("Please enter your guess\n");
    scanf("%d",&guess);
    if(guess>answer){
        printf("Too large\n");}
    else if(guess<answer){
        printf("Too small\n");}
    else{
        printf("Correct\n");}


}