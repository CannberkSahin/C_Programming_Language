#include <stdio.h>
#include <stdlib.h>

/*Defined Macros*/
#define     SIZE      100

//Defined Own gets function
void sgets(char *p)
{
	int c;

	while ((c = getchar()) != '\n' && c != EOF)
		*p++ = (char)c;

	*p = '\0';
}

//Define Own myputs function
void myputs(const char* p)
{
    while(*p != '\0'){//Write a while(*p)
        putchar(*p++); //Use idiom
    }
    putchar('\n'); //Give a new line character standard output stream
}

int main()
{
    char str[SIZE];
    printf("Enter a string:");
    sgets(str);
    myputs(str);
}
