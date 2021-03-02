#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*When the name of an array is used in an expression in the C language (with one exception)
     it is always converted to the address of the first element of the array. This exception is
     the sizeof operator.If the sizeof operator is the operator, the string name is not converted to an address.*/
    int a[5] = { 0 };

    printf("%zu\n", sizeof(a));    //How many bytes the array 'a' occupies in memory, where 20 bytes
    printf("%zu\n", sizeof(&a[0]));//How many bytes space of int* type in memory, where 4 bytes
    /*Note that when an array is the operator of the sizeof operator, array decay is not applied.*/
}
