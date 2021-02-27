#include <stdio.h>
#include <stdlib.h>

/*Write own isupper function*/
int my_isupper(int c)
{
    return c >= 'A' && c <= 'Z' ? 1 : 0;
}

/*Write own isupper function*/
int my_islower(int c)
{
    return c >= 'a' && c <= 'z' ? 1 : 0;
}

/*Write own toupper function*/
//First way
int my_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return c - 'a' + 'A';

	return c;
}

//Second way
int my_second_toupper(int c)
{
	return c >= 'a' && c <= 'z' ? c - 'a' + 'A' : c;
}

/*Write own toupper function*/
//First way
int my_tolower(int c)
{
	if (c >= 'A'&&c <= 'Z')
		return c - 'A' + 'a';

	return c;
}

//Second way
int my_second_tolower(int c)
{
	return c >= 'A' && c <= 'Z' ? c - 'A' + 'a' : c;
}

int main()
{
    int ch;
    printf("Enter a character :");
    ch = getchar();

    if(my_islower((ch)))
        printf("charcter is lower case\n");

    if(my_isupper((ch)))
         printf("charcter is lower case\n");

    printf("%c --> %c\n", ch,my_toupper(ch));
    printf("%c --> %c\n", ch,my_tolower(ch));
    printf("%c --> %c\n", ch,my_second_toupper(ch));
    printf("%c --> %c\n", ch,my_second_tolower(ch));
}
