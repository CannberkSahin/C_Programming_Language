#include <stdio.h>
#include <stdlib.h>

/*Define Type Alias*/
typedef int* IPTR; //The synonym of int* type is specified as IPTR

typedef const int* CIPTR;

int main()
{
    int x = 10;
    int y = 20;

    const IPTR ptr = &x; //Top Level Const
    //int *const ptr = &x;

    //ptr = &y; //Syntax Error
    *ptr = 94; //Legal Code
    printf("x = %d\n", x);

    CIPTR p = &x;  //Low Level Cosnt
    //*p = 34; //Syntax Error
    p = &y; ////Valid Code
    printf("Address of y = %p\n",p);
}
