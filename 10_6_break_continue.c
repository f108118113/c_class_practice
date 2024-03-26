#include <stdio.h>

int main()
{
    int number;
    int ans = 0 ;
    printf("Please input max number: ");
    scanf("%d", &number);


    for(int i = number; i >= 1; i--){
        if(i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
        {
            ans = i;
            break;
        }
    }
    if(ans != 0){
        printf("%d\n", ans);
    }

    return 0;
}