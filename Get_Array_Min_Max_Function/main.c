#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define     SIZE     100

void get_array_min_max(const int *p, size_t size, int *pmin, int *pmax)
{
    *pmin = *pmax = *p; //Chained assignment

    for(int i=1; i<size; ++i){
        if(p[i]<*pmin)
            *pmin=p[i];
        else if(p[i]>*pmax)
            *pmax=p[i];
    }
}

int main()
{
    int a[SIZE];
    int min,max;

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    get_array_min_max(a, SIZE, &min, &max);

    printf("min = %d\n", min);
    printf("max = %d\n", max);
}
