#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define     SIZE     20

//Define the function that reverses the array that use swap fun. in mutility.c
void reverse_array(int *p, size_t size)
{
    int n = size / 2;
    int *pe = p + size; //Get the address of the last element of the array

    while(n--)
        swap(p++, --pe);

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
