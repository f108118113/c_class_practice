#include <stdio.h>

int main(){
    int number;
    int max;
    int ans = 0 ;
    printf("Please input max number: ");
    scanf("%d", &number);

    for(int i = 1; i <= number ; i++)
    {
        if( i % 3 == 2 && i % 5 == 3 && i % 7 == 2){
            max=i;
        }
    }
    if(max!=0){
    printf("%d\n",max);
    }


    max=number;
    while(max>0 && !( max % 3 == 2 && max % 5 == 3 && max % 7 == 2))
    {
        max--;
    }
    if(max>0){
        printf("%d\n",max);
    }

    for(int i=number ; i>=1 && ans==0 ; i--){
        if( i % 3 == 2 && i % 5 == 3 && i % 7 == 2)
        {
            ans=i;
        }
    }
    if(ans!=0){
        printf("%d\n",ans);
    }

    return 0;
}