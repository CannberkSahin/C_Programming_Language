#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define     SIZE     20

int main()
{
    int a[SIZE];
    int *p1, *p2;

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);

    p1 = &a[rand() % SIZE];
    p2 = &a[rand() % SIZE];

    if(p1 < p2){
        while(p1 != p2)
            printf("%d ", *p1++);
    }
    else{
        while(p2 != p1)
            printf("%d ", *p2++);
    }
}
