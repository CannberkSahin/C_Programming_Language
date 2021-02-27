#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int c1, c2;

    //characters must be entered without any spaces between them.
    //Because the login process is to do with the getchar() function.
	printf("Enter two characters: ");
	c1 = getchar();
	c2 = getchar();

	if (toupper(c1) == toupper(c2))
		printf("%c and %c are the same characters\n", c1, c2);
	else
		printf("%c and %c are different characters\n", c1, c2);
}
