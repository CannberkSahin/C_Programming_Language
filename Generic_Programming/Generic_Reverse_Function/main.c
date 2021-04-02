#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mutility.h"

//Define Macros
#define   SIZE    100

//Define Generic Reverse Array Function
//First Method
void *greverse_array1(void *vpa, size_t size, size_t sz_elem)
{
    char *p = vpa;  // char *p = (char *)vpa;

    for(size_t i=0; i< size/2; ++i){
        gswap(p + i * sz_elem,  p + (size - 1 - i) * sz_elem, sz_elem);
    }

    return vpa;
}

//Second Method
void *greverse_array2(void *vpa, size_t size, size_t sz_elem)
{
    char *ps = vpa; //array starting address
    char *pe = ps + size * sz_elem; //the address of where the array ends

    while(ps < pe){
        pe -= sz_elem;
        gswap(ps,pe,sz_elem);
        ps += sz_elem;
    }

    return vpa;
}

int main()
{
    int a[] = {1,3,5,7,9,11,13,17,19,21};
    double b[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};

    greverse_array2(a, asize(a), sizeof(*a)); //sizeof(int) = sizeof(*a)
    greverse_array2(b, asize(b), sizeof(*b)); //sizeof(double) = sizeof(*b)

    display_array(a, asize(a)); //Printed a array on the screen

    for(size_t i=0; i<asize(b);++i)
        printf("%.3f ", b[i]); //Printed b array on the screen
}
