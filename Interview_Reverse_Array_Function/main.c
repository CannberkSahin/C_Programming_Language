#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define     SIZE     100

//Define reverse array function
void reverse_array(int *p, size_t size)
{
    int *pe = p + size; //The variable pe pointer holds the address of where the index ends

    while(p < pe)
        swap(p++, --pe);
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    //call reverse_array function
    reverse_array(a, SIZE);
    display_array(a, SIZE);
}
