#include <stdio.h>
#include <stdlib.h>

//Define Macros
#define     SIZE     100

//Define own strcpy function first method
char *strcpy1(char *pdest, const char *psource)
{
    char *p = pdest;

    while(*psource != '\0'){
        *pdest = *psource;
        ++pdest;
        ++psource;
    }

    *pdest = '\0';

    return p;
}

//Define own strcpy function idiom (Best C idiom)
char *strcpy2(char *pdest, const char *psource)
{
    char *p = pdest;

    while(*pdest++ = *psource++)
        ; //Null statement

    return p;
}

int main()
{
    char source[SIZE];
    char dest[SIZE];

    printf("Enter a name:");
    scanf("%s",source);

    strcpy2(dest, source);

    printf("Source:(%s) to destination:(%s) copy\n",source, dest);
}
