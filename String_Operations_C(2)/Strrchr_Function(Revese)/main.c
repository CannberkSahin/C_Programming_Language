#include <stdio.h>
#include <stdlib.h>

//Define Macros
#define     SIZE      100

//Defined Own gets function
void sgets(char *p)
{
	int c;

	while ((c = getchar()) != '\n' && c != EOF)
		*p++ = (char)c;

	*p = '\0';
}

//Define own strchr function
char *strchr1(const char *p, int c)
{
    while(*p){ //while(*p != NULL)
        if(*p == c)
            return (char *)p; //const cast
        ++p;
    }

    if(c == '\0') //if search null character
        return (char *)p;

    return NULL;  //If the searched character is not found
}

//Define own strrchr function (Reverse strchr)
char *strrchr1(const char *ptr, int c)
{
    const char *p = NULL;

    while(*ptr){ //while(*ptr != '\0')
        if(*ptr == c)
            p = ptr;
        ++ptr;
    }

    if(c == '\0')  //if character null char. return same ptr address
        return (char *)ptr;

    return (char *)p;
}

int main()
{
    char str[SIZE];
    int c;
    char *ptr;

    printf("Enter a string:");
    sgets(str);
    printf("Enter the character to search:");
    c = getchar();

    if((ptr = strchr1(str, c)) != NULL){ //Assignment idiom
        printf("strchr: found characters with %d indexes.\n", ptr - str);
        *ptr = '!';
    }
    else
        printf("Character not found!");

    if((ptr = strrchr1(str, c)) != NULL){ //Assignment idiom
        printf("strrchr: found characters with %d indexes.\n", ptr - str);
        *ptr = '?';
    }
    else
        printf("Character not found!");
}
