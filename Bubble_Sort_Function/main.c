#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define     SIZE     100

//Define the bubble sort algorithm function
void bubble_sort_function(int *p, size_t size)
{
    for(int i=0; i < size - 1; ++i){
        for(int k=0; k < size - 1 - i; ++k){
            if(p[k]>p[k+1]){
                swap(p + k, p + k + 1);
            }
        }
    }
}


int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    bubble_sort_function(a ,SIZE);
    display_array(a, SIZE);
}
