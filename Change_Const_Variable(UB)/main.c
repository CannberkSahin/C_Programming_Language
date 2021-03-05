#include <stdio.h>
#include <stdlib.h>

/*Undefined Behavior Example*/
int main()
{
    const int x = 10;     //Non changable value
    int *ptr = (int *)&x; //The type of variable x is const int *.
    /*The type of x in is converted to int * by converting the type with the type cast operator.*/
    *ptr = 7823;  //Undefined Behavior (ub)

    printf("x = %d\n",x);
}
