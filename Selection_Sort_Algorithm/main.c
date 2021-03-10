#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mutility.h"

//Define Macros
#define      SIZE     100

int *get_array_min(const int *p, size_t size)
{
    const int *pmin = p;

    for(size_t i=1; i < size; ++i){
        if(p[i]<*pmin)
            pmin = p + i;
    }

    return (int *)pmin; //const cast
}

//selection sort algorithm Implemented
void selection_sort(int *p, size_t size)
{
    for(size_t i = 0; i < size - 1; ++i){
        swap(get_array_min(p + i, size - i), p + i);
    }
}

int main()
{
    int a[SIZE];
    int *pmin;

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    //Call selection sort function
    selection_sort(a, SIZE);
    display_array(a, SIZE);
}
