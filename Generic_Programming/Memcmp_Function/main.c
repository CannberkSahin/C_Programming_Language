#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mutility.h"

//Define Macros
#define   SIZE    100

//Define memcmp function
int memcmp1(const void *vp1, const void *vp2, size_t n)
{
    const unsigned char *p1 = vp1;
    const unsigned char *p2 = vp2;

    while(n--){
        if(*p1 != *p2) //Two memory blocks not equal
            return *p1 > *p2 ? 1 : -1;
        ++p1;
        ++p2;
    }

    return 0; //Two memory blocks equal
}

int main()
{
    int a[SIZE];
    int b[SIZE];

    randomize();
    set_random_array(a, SIZE);
    memcpy(b, a, sizeof a);

    display_array(a, SIZE);
    display_array(b, SIZE);

    if(!memcmp1(a, b, sizeof a))
        printf("Yes equal.\n");
    else
        printf("Not equal!\n");

    ++b[rand() % SIZE];

    if(!memcmp1(a, b, sizeof a))
        printf("Yes equal.\n");
    else
        printf("Not equal!\n");

    if(!memcmp1(a + 10, b + 50, 10 * sizeof(int)))
        printf("Yes equal.\n");
    else
        printf("Not equal!\n");
}
