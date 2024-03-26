#include <stdio.h>
int main()
{
    int integer1;
    int integer2;
    int sum;
    printf("Please input first number: ");
    scanf("%d", &integer1);
    printf("Please input second number: ");
    scanf("%d", &integer2);
    sum = integer1 + integer2;
    printf("Sum is: %d\n", sum);
    return 0;
}