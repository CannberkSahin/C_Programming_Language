Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

C language is a language based on functional decomposition.
Therefore, big problems are solved by dividing them into small functions.
Too many functions are needed to solve some problems.
Usually makes use of standard C libraries.But in some cases these standard C libraries fall short.
In this case, we need to create our own library in C language. 
The C language library usually contains two files.
One of them is the header file with .h extension and the other is the implementation file with .c extension.
We have written our own library of frequently used functions to avoid rewriting some functions over and over.
The name of the library is mutility. This name was chosen because there is a standard utility 
library in the C language.In order not to conflict with the C language utility library, the letter m, 
meaning our own library, has been added to the beginning of the utility name.
There are many functions in the library, from functions that create arrays of random numbers to small wrappers.

memchr function
===============
void* memchr( const void* ptr, int ch, size_t count);

Finds the first occurrence of ch (after conversion to unsigned char as if by (unsigned char)ch) in the initial 
count characters (each interpreted as unsigned char) of the object pointed to by ptr.
The behavior is undefined if access occurs beyond the end of the array searched. The behavior is undefined if 
ptr is a null pointer.
This function behaves as if it reads the characters sequentially and stops as soon as a matching character is 
found: if the array pointed to by ptr is smaller than count, but the match is found within the array, the behavior 
is well-defined.(since C11)

Parameters
==========
ptr	- pointer to the object to be examined
ch	- character to search for
count	- max number of characters to examine

Return value
============
Pointer to the location of the character, or a null pointer if no such character is found.

Example
=======
#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char str[] = "ABCDEFG";
    char *ps = memchr(str,'D',strlen(str));
    if (ps != NULL)
       printf ("search character found:  %s\n", ps);
    else
       printf ("search character not found\n");
 
    return 0;
}
Output:
search character found:  DEFG

Memchr, a standard C function, has been implemented in this program. const char *p = vp; 
With the expression, it is provided to search the value to be searched in byte. Because 
void pointer cannot be deference. Void * type is assigned to char * type and dereference 
is provided. With the while (n--) statement, a loop is created that returns n times. 
If (* p == val) statement is spelled inside the loop. If the searched value is found, 
the address of the found expression is returned. If the search could not be found, the next 
address was checked. If the searched value is not found at all, the function returns a null 
pointer.
Test codes were written in the main function for the function named memchr1. Byte name is 
given to unsigned char type with the method of giving type synonyms.(typedef   unsigned char Byte;)
Later, a 100-element array named buffer of Byte type is defined. Elements of the array named Buffer 
are randomly filled with the value 1. Since the array is randomly filled with 1, it is possible for 
all of them to be 1, and it is possible to have 0 values in it. The elements of the array are shown 
on the screen. It is shown below;
1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
Then, the value 0 was searched in the array with the memchr1 function we wrote. If 0 is found, 
the address of the location is returned. If 0 is not found, Null pointer is returned.If the searched 
value is found, since the function sends the address of the location, the element of the array can be 
found thanks to the poiter aerythetics. If the address of the first element of the array is removed 
from the address containing the value, the index of the searched value is found. 

Good work and Best Regards.