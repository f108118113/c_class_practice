#include <stdio.h>
int main()
{
    int integer;
    int sum;
    printf("Please input first number: ");
    scanf("%d", &integer);
    sum = integer;
    printf("Please input second number: ");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("Please input three number: ");
    scanf("%d", &integer);
    sum = sum + integer;
    printf("Sum is: %d\n", sum);




    return 0;
}