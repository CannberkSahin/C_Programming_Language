#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define     SIZE    100

//Define memcpy function
void *memcpy1(void *vpdest, const void *vpsource, size_t size)
{
    char *pdest = vpdest; //Type conversion is done implicitly here (char*)vpdest
    const char *psource = vpsource; ////Type conversion is done implicitly here (const char*)vpsource

    while(size--)
        *pdest++ = *psource++;

    return vpdest;
}

int main()
{
    int a[SIZE];
    int b[SIZE] = {0};
    int idxa,idxb,n;

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);

    printf("Enter index in array a:");
    scanf("%d",&idxa);
    printf("Enter index in array b:");
    scanf("%d",&idxb);
    printf("How many elements will be copied:\n");
    scanf("%d",&n);

    memcpy1(b + idxb, a + idxa, n * sizeof(int));
    display_array(b, SIZE);
}
