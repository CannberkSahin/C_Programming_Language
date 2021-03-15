Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

This program demonstrates the use of a standard C function called strstr.
Strstr function is a search function for another text within a text.

strstr: Defined in header <string.h>
====================================
char *strstr(const char* str, const char* substr); //Function Prototype

Finds the first occurrence of the null-terminated byte string pointed to by substr in the 
null-terminated byte string pointed to by str. The terminating null characters are not compared.
The behavior is undefined if either str or substr is not a pointer to a null-terminated byte string.

Parameters
==========
str	- pointer to the null-terminated byte string to examine
substr	- pointer to the null-terminated byte string to search for

Return value
============
Pointer to the first character of the found substring in str, or a null pointer if 
such substring is not found. If substr points to an empty string, str is returned.

Example
=======
#include <string.h>
#include <stdio.h>
 
void find_str(char const* str, char const* substr) 
{
    char* pos = strstr(str, substr);
    if(pos) {
        printf("found the string '%s' in '%s' at position: %ld\n", substr, str, pos - str);
    } else {
        printf("the string '%s' was not found in '%s'\n", substr, str);
    }
}
 
int main(void) 
{
    char* str = "one two three";
    find_str(str, "two");
    find_str(str, "");
    find_str(str, "nine");
    find_str(str, "n");
 
    return 0;
}
Output:
found the string 'two' in 'one two three' at position: 4
found the string '' in 'one two three' at position: 0
the string 'nine' was not found in 'one two three'
found the string 'n' in 'one two three' at position: 1

Good work and Best Regards.