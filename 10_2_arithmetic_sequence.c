#include <stdio.h>

int main(){
    int n=10;
    
    for(int i=2; i<=n; i+=2)
    {
        printf("%d\n",i);
    }

    for(int i=1; i<=5; i++)
    {
        int number = 2*i; 
        printf("%d\n",number);
    }
    


    for(int i=1; i<=n; i++)
    {
        if( (i%2) == 0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}