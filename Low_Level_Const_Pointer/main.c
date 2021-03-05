#include <stdio.h>
#include <stdlib.h>

//Pointer To Const int
//Low Level Const
int main()
{
    int y = 14;
    int x = 10;
    const int *p = &x; //Object value cannot be changed.
    //But the address of the object can be changed.

    *p = 56; //Syntax Error.
    p = &y;  //No syntax error.
    //But the address of the object can be changed.
}
