#include <stdio.h>
#include <stdlib.h>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int f_ival = 13;
    int s_ival = 27;

    printf("f_ival = %d, s_ival = %d\n", f_ival,s_ival);
    swap(&f_ival,&s_ival);
    printf("f_ival = %d, s_ival = %d\n", f_ival,s_ival);
}
