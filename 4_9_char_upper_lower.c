#include <stdio.h>

int main()
{
    char input;
    printf("Plese input letter");
    scanf("%c", &input);
    if((input >= 65 ) & (input <= 90 ) )
    {
        input = input + 32;
        printf("output: %c\n", input);
    }
    else if((input >= 97 ) & (input <= 122 ) )
    {
        input = input - 32;
        printf("output: %c\n", input);
    }
    else
    {
        printf("Plese input letter!");
    }

   
}