#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*Program to detect the category of a character taken from the user.*/
int main()
{
    int c;
	printf("Enter a character: ");
	c = getchar();

	if (isupper(c))
		printf("isupper true\n");

	if (islower(c))
		printf("islower true\n");

	if (isalpha(c))
		printf("isalpha true\n");

	if (ispunct(c))
		printf("ispunct true\n");

	if (isdigit(c))
		printf("isdigit true\n");

	if (isalnum(c))
		printf("isalnum true\n");

	if (isxdigit(c))
		printf("isxdigit true\n");

	if (isprint(c))
		printf("isprint true\n");

	if (isspace(c))
		printf("isspace true\n");

	if (isblank(c))
		printf("isblank true\n");

	if (iscntrl(c))
		printf("iscntrl true\n");

	if (isgraph(c))
		printf("isgraph true\n");
}
