#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define     SIZE     20

//Define the function that reverses the array that use swap fun. in mutility.c
void reverse_array(int *p, size_t size)
{
    int n = size / 2;

    for(int i=0; i<n; ++i){
        //swap(&p[i], &p[size - 1 - i]); or
        swap(p + i, p + size - 1 - i);
    }
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    reverse_array(a, SIZE);
    display_array(a, SIZE);
}
