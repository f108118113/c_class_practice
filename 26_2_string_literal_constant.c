#include <stdio.h>

int main(){
    char strA[] = "adc"; //stack;
    // 

    char *strB = "adc";  //*strB : stack; "adc" : data
    // String literals can be implicitly converted to character pointers.
    printf("strB addr: %p\n",strB); //0x10251bf90

    strA[0] = 'A'; // (O) can change single array value, 
    // strB[0] = 'A'; //(X) undefined behavior


    // strA = "ABC"; //(X) However, can't change entire array value
    strB = "ABC"; //(O) here additionally create a space for this string
    printf("strB addr: %p\n",strB); //0x10251bfa3
    return 0;
}