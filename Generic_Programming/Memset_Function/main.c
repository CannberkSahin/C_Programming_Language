#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define     SIZE    100

//Define memset function
void *memset1(void *vp, int val, size_t size)
{
    char *p = (char *)vp;

    while(size--)
        *p++ = val;

    return vp;
}

int main()
{
    int a[SIZE];
    size_t idx, n;

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);

    printf("Starting from which index:");
    scanf("%zu",&idx);
    printf("How many elements will be clear:");
    scanf("%zu",&n);

    memset1(a + idx, 0 , n * sizeof(int));
    display_array(a, SIZE);
}
