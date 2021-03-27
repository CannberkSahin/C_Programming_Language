#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1;

    if(*(char *)&x)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");
}
