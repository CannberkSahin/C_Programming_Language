#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mutility.h"

//Define Macros
#define      SIZE     20

/*Function definition that will pass the address of both the
smallest and the largest element of an array to the calling code.*/
void get_min_max_address(const int *pa, size_t size, int **pmin, int **pmax)
{
    *pmin = *pmax = (int *)pa; //const cast

    for(size_t i=1; i<size; ++i){
        if(pa[i] > **pmax){
            *pmax = (int *)(pa + i); //&pa[i]; --> const cast
        }
        else if(pa[i] < **pmin){
            *pmin = (int *)(pa + i); //&pa[i]; --> const cast
        }
    }
}


int main()
{
    int a[SIZE];
    int *ptr_min, *ptr_max;

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);

    get_min_max_address(a, SIZE, &ptr_min, &ptr_max);
    printf("min = %d and the %d. element of the array\n",*ptr_min, ptr_min-a);
    printf("max = %d and the %d. element of the array\n",*ptr_max, ptr_max-a);

    swap(ptr_max,ptr_min);
    display_array(a, SIZE);
}
