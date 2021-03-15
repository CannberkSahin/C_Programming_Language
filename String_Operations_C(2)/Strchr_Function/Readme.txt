Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

There are many standard functions for string operations in C language. In this program, 
a standard C function strchr function is implemented. The strchr function is a 
function that searches for a character in a text. However, it finds the first character 
in the text. If the same character occurs more than once, it won't find them.

strchr: Defined in header <string.h>
====================================
char *strchr(const char *str, int ch);  //Prototype of function

Finds the first occurrence of ch (after conversion to char as if by (char)ch) in the 
null-terminated byte string pointed to by str (each character interpreted as unsigned char). 
The terminating null character is considered to be a part of the string and can be found 
when searching for '\0'.
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
#include <stdio.h>
#include <string.h>
 
int main(void)
{
  const char *str = "Try not. Do, or do not. There is no try.";
  char target = 'T';
  const char *result = str;
 
  while((result = strchr(result, target)) != NULL) {
    printf("Found '%c' starting at '%s'\n", target, result);
    ++result; // Increment result, otherwise we'll find target at the same location
  }
}
Output:
=======
Found 'T' starting at 'Try not. Do, or do not. There is no try.'
Found 'T' starting at 'There is no try.'
(Cited: cppreferance.com)

The name of the function we have written is strchr1.
The reason the function is 1 at the end is to avoid name conflicts with the standard strchr function.
The function has two parameters. The first parameter asks for the address of the text containing
the character to be searched. The second parameter requires the character to be searched for in the text.
The while loop has been created in the function and the string has begun to traverse.
The process performed is called a linear search algorithm. It is tested whether the last character of 
the text is a null character. If the searched character is found, the address of that character is 
returned. If the searched character is not found, a Null pointer is returned. 
Null characters can also be searched to find the end of the array in the function. To do this, null 
characters must be passed to the function's argument.

Good work and Best Regards.