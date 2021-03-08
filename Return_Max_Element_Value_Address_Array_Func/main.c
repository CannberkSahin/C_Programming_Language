#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mutility.h"

//Define Macros
#define      SIZE     20

int *get_array_max(const int *p, size_t size)
{
    const int *pmax = p;

    for(size_t i=1; i < size; ++i){
        if(p[i]>*pmax)
            pmax = p + i;
    }

    return (int *)pmax; //const cast
}

int main()
{
    int a[SIZE];
    int *pmax;

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    pmax = get_array_max(a, SIZE);
    printf("max = %d index of max element = %d\n",*pmax, pmax - a);
}
