#include <stdio.h>
#include <stdlib.h>

/*Const Pointer Const Int*/
int main()
{
    int y = 14;
    int x = 10;
    const int *const p = &x; //Object value cannot be changed.
    //Address of the object cannot be changed.

    //*p = 56; //Syntax Error.
//    p = &y;  //Syntax Error
}
