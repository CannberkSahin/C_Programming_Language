#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define Macro
#define       SIZE      100

//Define Functions
void sgets(char *p)
{
	int c;

	while ((c = getchar()) != '\n' && c != EOF)
		*p++ = (char)c;

	*p = '\0';
}

//Define Function
char *strpbrk1(const char *pstr, const char *pc)
{
    for(int i=0; pstr[i] != '\0'; ++i){
        if(strchr(pc, pstr[i]))
            return (char *)(pstr + i); //cosnt cast
    }

    return NULL; //Null pointer
}

int main()
{
    const char str[] = "xwqjp";
    char s[SIZE];
    char *ptr;

    printf("Enter a string:");
    sgets(s);

    ptr = strpbrk1(s, str);
    if(ptr != NULL){//if(ptr)
        printf("The searched character was found. idx = %d\n", ptr - s);
    }
    else
        printf("The searched character was not found!\n");
}

