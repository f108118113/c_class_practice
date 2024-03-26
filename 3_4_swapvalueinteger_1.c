#include <stdio.h>
int main()
{
    int integer1;
    int integer2;
    int tmp;
    printf("Please input first number: ");
    scanf("%d", &integer1);
    printf("Please input second number: ");
    scanf("%d", &integer2);

    tmp = integer1;
    integer1 = integer2;
    integer2 = tmp;

    printf("integer1 is: %d\n", integer1);
    printf("integer2 is: %d\n", integer2);
    return 0;
}