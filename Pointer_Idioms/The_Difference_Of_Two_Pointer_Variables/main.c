#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

/*Define Macros*/
#define     SIZE      10

int main()
{
    double a[SIZE] = { 0 };

    double *p1 = a + 5; //Array decay
    double *p2 = a + 2;

    printf("p1 - p2 = %d\n", p1 - p2);
    printf("p2 - p1 = %d\n", p2 - p1);
}
