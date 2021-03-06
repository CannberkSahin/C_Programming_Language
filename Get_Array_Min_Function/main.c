#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define     SIZE     100

int get_array_min(const int *p, size_t size)
{
    int min = *p; //The first element is considered a min
    //int min = p[0]; //Same thing

    for(int i=1;i<size;++i){
        if(p[i]<min)
            min = p[i];
    }

    return min;
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);

    printf("min = %d\n",get_array_min(a, SIZE));
}
