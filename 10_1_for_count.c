#include <stdio.h>

int main(){
    int count;
    int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
    for(count=1; count<=n; count++){
        printf("%d\n",count);
    }
    return 0;
}