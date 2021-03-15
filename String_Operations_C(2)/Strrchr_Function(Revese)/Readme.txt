Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

There are many standard functions for string operations in C language. In this program, 
a standard C function strrchr function is implemented. The strrchr function is a 
function that searches for a character in a text. However, it finds the last character 
in the text.If the same character occurs more than once, it won't find them.

strrchr: Defined in header <string.h>
====================================
char *strrchr(const char *str, int ch);  //Prototype of function

Finds the last occurrence of ch (after conversion to char as if by (char)ch) in the null-terminated 
byte string pointed to by str (each character interpreted as unsigned char). The terminating null 
character is considered to be a part of the string and can be found if searching for '\0'.

The behavior is undefined if str is not a pointer to a null-terminated byte string.

Parameters
==========
str - pointer to the null-terminated byte string to be analyzed
ch  - character to search for
Return value
============
Pointer to the found character in str, or null pointer if no such character is found.

Example:
========
#include <string.h>
#include <stdio.h>
 
int main(void)
{
    char szSomeFileName[] = "foo/bar/foobar.txt";
    char *pLastSlash = strrchr(szSomeFileName, '/');
    char *pszBaseName = pLastSlash ? pLastSlash + 1 : szSomeFileName;
    printf("Base Name: %s", pszBaseName);
}
Output:
=======
Base Name: foobar.txt
(Cited: cppreferance.com)

The name of the function we have written is strrchr1.
The reason the function is 1 at the end is to avoid name conflicts with the standard strrchr function.
The function has two parameters. The first parameter asks for the address of the text containing
the character to be searched. The second parameter requires the character to be searched for in the text.
The while loop has been created in the function and the string has begun to traverse.
The function saves the character it finds in the array.Thus, the series only traveses to the end. 
Otherwise, we would have to traverse both from beginning to end and from beginning to end.
The function returns the address of the last character it found. Thus, it finds the wanted character 
at the end of the array. If the searched character is not found, a Null pointer is returned. 
Null characters can also be searched to find the end of the array in the function. To do this, null 
characters must be passed to the function's argument.

Good work and Best Regards.