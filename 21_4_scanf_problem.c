#include <stdio.h>

int main(){
    int input;    
    while(scanf("%d", &input) != 1){
        printf("Error: invalid input\n");
        fflush(stdin);
        // char c;
        // while ((c = getchar()) != '\n');
    }
    printf("%d\n", input);
    return 0;
}