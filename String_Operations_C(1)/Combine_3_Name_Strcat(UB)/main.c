#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define Macros
#define    SIZE    100

int main()
{
    char str[SIZE]; //automatic storage and full of garbage values.

    str[0] = '\0'; //protect undefined behavior
    char s1[SIZE] = "can";
    char s2[SIZE] = "Berk";
    char s3[SIZE] = "Source";

    //Expected is that the three names combine in canBerkSource.
    strcat(strcat(strcat(str,s1),s2),s3); //Undefined behavior (if not use str[0] = '\0'; statement)

    printf("(%s)\n",str);
}
