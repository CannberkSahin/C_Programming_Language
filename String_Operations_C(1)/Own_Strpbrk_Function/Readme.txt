Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

The function strpbrk() is used to find the first character of first string and 
matches it to any character of second string. It returns NULL, if no matches are 
found otherwise, it returns a pointer to the character of first string that matches 
to the character of second string.

strpbrk: Defined in header <string.h>
=====================================
char* strpbrk(const char* dest, const char* breakset);

Scans the null-terminated byte string pointed to by dest for any character from the 
null-terminated byte string pointed to by breakset, and returns a pointer to that character.
The behavior is undefined if either dest or breakset is not a pointer to a null-terminated byte string.

Parameters
==========
dest	 - pointer to the null-terminated byte string to be analyzed
breakset - pointer to the null-terminated byte string that contains the characters to search for

Return value
============
Pointer to the first character in dest, that is also in breakset, or null pointer if no such 
character exists.

Notes
=====
The name stands for "string pointer break", because it returns a pointer to the first 
of the separator ("break") characters.

Example
=======
#include <stdio.h>
#include <string.h>
 
int main(void)
{
    const char* str = "hello world, friend of mine!";
    const char* sep = " ,!";
 
    unsigned int cnt = 0;
    do {
       str = strpbrk(str, sep); // find separator
       if(str) str += strspn(str, sep); // skip separator
       ++cnt; // increment word count
    } while(str && *str);
 
    printf("There are %u words\n", cnt);
}
Output:
There are 5 words

In this program, we coded the standard C function strpbrk ourselves. Strpbrk1 is chosen so that 
the name of the function does not conflict. The function has two parameter values. The first of 
these requests the address of the string to be searched. The other parameter is asking for the 
address of the string of letters to be searched. A for loop is used to search within the array. 
The search is done using the null termineted by string rule. The standard C function strchr 
function is used to search within the function.If the searched character is found in the text, 
the function returns the address of the first character it finds. If not, it returns a null pointer.

Good work and Best Regards.