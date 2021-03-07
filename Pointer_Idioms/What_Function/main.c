#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

/*Define Macros*/
#define     SIZE      20

void what(int *ptr, int size)
{
    while(size--)
        ++*ptr++;
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);

    what(a, SIZE);
    display_array(a, SIZE);
}
