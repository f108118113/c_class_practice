/*
    const is read-only
    A variable of a data type modified by const 
    cannot be assigned a value again 
    after its "initialization."
*/

int main(){
    int a = 1;
    int const b = 2; //(O) same as b 
    const int c = 2; //(O) same as c
    // const int d; // undefine
    // d = 3; //(X) d is a read-only type,  you can't change its value.

    a = 2; //(O)
    // b = 3 //(X)
    // c = 3 //(X)
    // d = 4 //(X)

    int a_array[] = {1, 2, 3};
    int const b_array[] = {4, 5, 6};

    a_array[0] = 2; //(O)
    // b_array[0] = 2; //(x)

    return 0;
}