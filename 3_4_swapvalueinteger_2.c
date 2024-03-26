#include <stdio.h>
int main()
{
    /*This method just for integer*/
    int integer1;
    int integer2;
    printf("Please input first number: ");
    scanf("%d", &integer1);
    printf("Please input second number: ");
    scanf("%d", &integer2);

    integer1 = integer1 + integer2;
    integer2 = integer1 - integer2;
    integer1 = integer1 - integer2;

    printf("integer1 is: %d\n", integer1);
    printf("integer2 is: %d\n", integer2);
    return 0;
}