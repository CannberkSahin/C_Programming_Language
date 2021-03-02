#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;

    *&x = 99; //Legal because pointer operators are right associative

    ++*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&x; //Obfuscation Expression
    printf("value of x = %d\n", x);
}
