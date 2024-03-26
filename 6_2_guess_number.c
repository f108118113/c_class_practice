#include <stdio.h>

int main(){

    int answer = 51;
    int input = 0;

    while(1){
        printf("Please insert number: ");
        scanf("%d", &input);
        if (input < answer)
        {
            printf("%d is lower than answer\n", input);
        }
        else if (input > answer)
        {
            printf("%d is higher than answer\n", input);
        }
        else if (input == answer)
        {
            printf("%d is correct!\n", input);
            break;
        }
    }
}