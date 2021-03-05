#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;

    ++(&x)[0]; //Obfuscation Expression (++x)

    printf("x = %d\n", x);
}
