#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int *pta = &a;
    int *ptp = &pta;

    //Same value: address of variable a
    printf("&a       = %p\n", &a);
    printf("pta      = %p\n\n", pta);
    //Same value: address of variable pta
    printf("&pta     = %p\n", &pta);
    printf("ptp      = %p\n", ptp);

    int x = 10;
    int y = 99;
    int *ptr = &x;
    int **p = &ptr;

    *p = &y;  //ptr = address of variable y (ptr = &y)
    ++**p;
    printf("y = %d\n",y);

    //Printed sizeof value of the ptr and p variable
    printf("\nsizeof(ptr) = %zu\n", sizeof(ptr));
    printf("sizeof(p)   = %zu\n", sizeof(p));
}
