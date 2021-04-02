#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define Macros
#define   BUFFER_SIZE    100

//Define type alias for objects
typedef   unsigned char Byte;

//Define memchr function
void *memchr1(const void *vp, int val, size_t n)
{
    const char *p = vp; //(const char *)vp;

    while(n--){
        if(*p == val)
            return (char *)p;

        ++p;
    }

    return NULL; //return null pointer
}

int main()
{
    Byte buffer[BUFFER_SIZE] = {0}; //set all bytes zero

    randomize();
    for(size_t i=0; i<5 * BUFFER_SIZE; ++i){
        buffer[rand() % BUFFER_SIZE] = 1;
    }

    for(size_t i=0; i< BUFFER_SIZE; ++i)
        printf("%u",buffer[i]);

    printf("\n\n");

    Byte *ptr = memchr1(buffer, 0, BUFFER_SIZE);

    if(ptr != NULL)
        printf("Was found. The %d element of the array.\n",ptr - buffer);
    else
        printf("Was not found.\n");
}
