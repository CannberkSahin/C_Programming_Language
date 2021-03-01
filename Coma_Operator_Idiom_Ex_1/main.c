#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;

    printf("Enter a string literal: ");
    while(ch = getchar(), ch != '\n')  //Famous Coma Op. Idiom
        printf("%c    %d\n",ch,ch);
}
