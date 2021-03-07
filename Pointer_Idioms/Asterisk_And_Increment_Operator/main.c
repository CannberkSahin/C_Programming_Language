#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

int main()
{
    int a[5] = {0,1,2,3,4};
    int *ptr = a;

    *ptr++ = 55; //Sets the first element of the array
    display_array(a, 5);

    *ptr = 77;  //Sets the second element of the array
    //Because of the side effect of increment operator
    display_array(a, 5);
}
