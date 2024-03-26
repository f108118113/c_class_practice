#include <stdio.h>
#include <stdbool.h>
int main(){
    int num1;
    int num2;
    char op;
    float answer;
    scanf("%d%c%d", &num1, &op, &num2);

    switch (op){
        case '+':
            answer=num1+num2;
            break;
        case '-':
            answer=num1-num2;
            break;
        case '*':
            answer=num1*num2;
            break;
        case '/':
            answer=(float)num1/num2;
            break;
    }    
    printf("ANS: %f\n",answer);
    return 0;
}