#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mutility.h"

//Define Macros
#define   SIZE    100

//Define Generic Search Function
void *gsearch(const void *vpa, size_t size, size_t sz_elem, const void *vpkey)
{
    const char *p = vpa;

    while(size--){
        if(!memcmp(p, vpkey, sz_elem))
            return (char *)p;
        p += sz_elem;
    }

    return NULL;
}

int main()
{
    int a[SIZE];
    int sval;
    int *ptr;

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);

    printf("Enter the value to search: ");
    scanf("%d",&sval);

    ptr = (int *)gsearch(a, SIZE, sizeof(int), &sval);
    if(ptr){ //if(ptr!=NULL)
        printf("Found %d! Index is %d\n",*ptr, ptr-a);
    }
    else
        printf("Value did not found!\n");
}
