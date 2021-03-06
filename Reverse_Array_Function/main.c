#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define     SIZE     20

//Define the function that reverses the array
void reverse_array(int *p, size_t size)
{
    for(int i=0; i<size/2; ++i){
        int temp = p[i];
        p[i] = p[size -1 - i];
        p[size -1 - i] = temp;
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
