#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define Macros
#define       SIZE       100

//Define Functions
//First way
char *strcat1(char *pdest, const char *psource)
{
    const char *ptemp = pdest;

    while(*pdest) //Find the last character of the text
        ++pdest;

    while(*pdest++ = (*psource++)) //Array copying idiom in C language
        ; //Null statement

    return (char *)ptemp; //const cast
}

//Second way
char *strcat2(char *pdest, const char *psource)
{
    strcpy(pdest + strlen(pdest), psource);

    return pdest;
}

//Third way
char *strcat3(char *pdest, const char *psource)
{
    strcpy(strchr(pdest, '\0'), psource);

    return pdest;
}

int main()
{
    char s1[SIZE];
    char s2[SIZE];

    printf("Enter a two name:");
    scanf("%s%s",s1, s2);

    strcat1(s1, s2);
    puts(s1);
}
