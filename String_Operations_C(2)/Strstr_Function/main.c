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

int main()
{
    char s1[SIZE];
    char s2[SIZE];

    char *p;

    printf("Enter the text to search in:");
    sgets(s1);
    printf("Enter the text to search:");
    sgets(s2);

    if((p = strstr(s1, s2)) != NULL){
        printf("Searched text found. idx = %d (%s)\n",p - s1 , p);
    }
    else
        printf("Searched text not found!\n");
}
