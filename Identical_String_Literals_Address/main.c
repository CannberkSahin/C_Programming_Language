#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p1 = "canberk sahin";
    char *p2 = "canberk sahin";

    if(p1 == p2)
        printf("Addresses are equal to each other.\n");
    else
        printf("Addresses are not equal to each other.\n");
}
