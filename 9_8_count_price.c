#include <stdio.h>

int main(){
    int price=0;
    int item;
    do{
        scanf("%d",&item);
        switch(item){
            case 1:
                price+=90;
                break;
            case 2:
                price+=75;
                break;
            case 3:
                price+=83;
                break;
            case 4:
                price+=89;
                break;
            case 5:
                price+=71;
                break;
            case 0:
                break;
        }
    }
    while(item!=0)
    printf("Totol price %d\n", price);

    return 0;
}