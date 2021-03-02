#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *ptr = &x;
    int *px = ptr;

    printf("&x   = %p\n", &x);
    printf("ptr  = %p\n", ptr);
    printf("px   = %p\n", px);
}
