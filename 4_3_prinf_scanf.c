# include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;
    double average;
    printf("Please enter first number: ");
    scanf("%d",&num1);
    printf("Please enter second number: ");
    scanf("%d",&num2);
    printf("Please enter third number: ");
    scanf("%d",&num3);

    average = (double)(num1+num2+num3)/3;
    printf("average=  %f\n",average);
}