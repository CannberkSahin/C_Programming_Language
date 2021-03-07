#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

/*Define Macros*/
#define     SIZE      100

void reverse_copy_array(int *pdest, const int *psource, int size)
{
    psource += size;  /*psource points to end of the array*/

    while(size--)
        *pdest++ = *--psource;  //Pointer idiom

}

int main()
{
    int a[SIZE];
    int b[SIZE];

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    reverse_copy_array(b, a, SIZE);
    display_array(b, SIZE);
}
