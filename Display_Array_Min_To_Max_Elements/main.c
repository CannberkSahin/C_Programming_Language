#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mutility.h"

//Define Macros
#define      SIZE     20

int *get_array_min(const int *p, size_t size)
{
    const int *pmin = p;

    for(size_t i=1; i < size; ++i){
        if(p[i]<*pmin)
            pmin = p + i;
    }

    return (int *)pmin; //const cast
}

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
    int *pmax, *pmin;

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    pmax = get_array_max(a, SIZE);
    pmin = get_array_min(a, SIZE);

    if(pmin <= pmax){
        while(pmin <= pmax){
            printf("%3d ", *pmin++);
        }
    }
    else{
        while(pmax <= pmin){
            printf("%3d ", *pmax++);
        }
    }
}
