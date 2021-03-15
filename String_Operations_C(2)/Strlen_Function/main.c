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

//Define own strlen function first method
size_t strlen1(const char *p)
{
    size_t len = 0;

    while(*p != '\0'){
        ++p;
        ++len;
    }

    return len;
}

//Define own strlen function second method
size_t strlen2(const char *p)
{
    size_t len = 0;

    while(*p++ != '\0')
        ++len;

    return len;
}

//Define own strlen function third method
size_t strlen3(const char *p) //Best method
{
    const char *ptemp = p; //starting address of string

    while(*p)  /*while(*p != '\0') */
        ++p;

    return (size_t)(p - ptemp); //the difference of the two addresses is an integer
}

int main()
{
    char str[SIZE];
    size_t len;

    printf("Enter a string:");
    sgets(str);
    len = strlen3(str);

    printf("Length of the string = %zu\n",len);
}
