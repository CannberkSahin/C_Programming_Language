#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define Macros
#define     SIZE      100

//Define functions
void sgets(char *p)
{
	int c;

	while ((c = getchar()) != '\n' && c != EOF)
		*p++ = (char)c;

	*p = '\0';
}

int is_at_end(const char *p1, const char *p2)
{
    size_t len1 = strlen(p1);
    size_t len2 = strlen(p2);

    if(len1 < len2)
        return 0;

   return  !strcmp(p1 + len1 - len2, p2);
}

int main()
{
    char s1[SIZE];
    char s2[SIZE];

    printf("Enter a first string:");
    sgets(s1);
    printf("Enter a second string:");
    sgets(s2);

    if(is_at_end(s1, s2)) //If s2 at the end of the s1 text
        printf("Yes there is\n");
    else
        printf("No its not\n");
}
