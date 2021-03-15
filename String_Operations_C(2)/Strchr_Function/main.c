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

int main()
{
    char str[SIZE];
    int c;
    char *ptr;

    printf("Enter a string:");
    sgets(str);
    printf("Enter the character to search:");
    c = getchar();

    ptr = strchr1(str, c);
    if(ptr){ //if(ptr != NULL)
        printf("Found...Element of array with index = %d\n",ptr - str);
        *ptr = '!';
        puts(str);
    }
    else
        printf("Character not found!\n");

    ptr = strchr1(str, '\0');
    *ptr++ = '*';
    *ptr = '\0';
    puts(str);
}
