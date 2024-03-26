#include <stdio.h>
int main()
{
    char ch5;
    char ch1 = 'A';
    char ch2 = '1';
    char ch3 = 'A' + '1';
    char ch4 = 'A' + 1;
    ch5 = ch1 + ch2;
    printf("ch1=%c\n", ch1);
    printf("ch2=%c\n", ch2);
    printf("'A'+'1'= %c\n", ch3);
    printf("'A'+1= %c\n", ch4);
    printf("ch5= %c\n", ch5);
    return 0;
}