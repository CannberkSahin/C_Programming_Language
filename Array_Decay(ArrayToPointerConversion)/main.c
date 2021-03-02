#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*The name of an array in the C language is always converted to
    the address of the first element of the array when used in an expression.*/
    int a[5] = { 1, 3, 6, 8, 9 };
    int *ptr;
    int *p = a; //We can write like this.
    //int *p = &a[0]; //Same thing

    ptr = a;

    printf("&a[0]      = %p\n", &a[0]);
    printf("a          = %p\n", a);
    printf("p          = %p\n", p);
    printf("ptr        = %p\n", ptr);
}
