#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

/*Define Macros*/
#define     SIZE      10

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);

    int *p1 = a + 3;
    int *p2 = a + 8;

    int size = p2 - p1;

    while(size--)
        printf("%3d ", *p1++);
}
