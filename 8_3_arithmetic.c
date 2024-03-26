#include <stdio.h>
#include <stdbool.h>
int main(){
    int num1;
    int num2;
    char op;
    float answer;
    scanf("%d%c%d", &num1, &op, &num2);

    if(op=='+'){
        answer=num1+num2;
        }
    else if(op=='-'){
        answer=num1-num2;
        }
    else if(op=='*'){
        answer=num1*num2;
        }
    else if(op=='/'){
        answer=(float)num1/num2;
    }
    printf("ANS: %f\n",answer);
    return 0;
}