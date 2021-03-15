#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

//Defined Own reverse puts function
void reverse_puts(const char *p)
{
    for(int i = (int)(strlen(p)-1); i >=0; --i){
        putchar(p[i]);
    }

    putchar('\n');
}

int main()
{
    int str[SIZE];

    printf("Enter a string:");
    sgets(str);
    puts(str);
    reverse_puts(str);
}
