#include <stdio.h>
#include <stdlib.h>

//Const Pointer
//Top Level Const
int main()
{
    int y = 13;
    int x = 10;
    int *const p = &x; //p is a const pointer
    //Here the value of p does not change.
    //Since the P holds an address, the address does not change.

    p = &y;  //Syntax error
    *p = 873; //No syntax error
}
