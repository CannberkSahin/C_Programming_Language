#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Define Macros*/
#define      SIZE       100

/*Define Global Variable*/
static char psw[] = "black cat";

/*Define Function Definition*/
void sgets(char *p)
{
	int c;

	while ((c = getchar()) != '\n' && c != EOF)
		*p++ = (char)c;

	*p = '\0';
}

int main()
{
    char psw_entry[SIZE];

    printf("Enter a password:");
    sgets(psw_entry);

    if(!strcmp(psw_entry, psw)){ //strcmp idiom
        printf("Password is correct.\n");
    }
    else
        printf("Password is wrong!\n");
}
