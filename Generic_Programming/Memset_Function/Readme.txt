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

memset function
===============
void *memset( void *dest, int ch, size_t count ); 

1) Copies the value ch (after conversion to unsigned char as if by (unsigned char)ch) into each of the first 
count characters of the object pointed to by dest.The behavior is undefined if access occurs beyond the end 
of the dest array. The behavior is undefined if dest is a null pointer.
2) Same as (1), except that the following errors are detected at runtime and call the currently installed 
constraint handler function after storing ch in every location of the destination range [dest, dest+destsz) 
if dest and destsz are themselves valid:
---------------------------------------
dest is a null pointer
destsz or count is greater than RSIZE_MAX
count is greater than destsz (buffer overflow would occur)

The behavior is undefined if the size of the character array pointed to by dest < count <= destsz; in other words, 
an erroneous value of destsz does not expose the impending buffer overflow.
As with all bounds-checked functions, memset_s is only guaranteed to be available if __STDC_LIB_EXT1__ is defined 
by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer constant 1 before including 
string.h.

Parameters
=======================================
dest	- pointer to the object to fill
ch	- fill byte
count	- number of bytes to fill
destsz	- size of the destination array

Return value
============
1) A copy of dest
2) zero on success, non-zero on error. Also on error, if dest is not a null pointer and destsz is valid, writes 
destsz fill bytes ch to the destination array.

Example
=======
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    char str[] = "ghghghghghghghghghghgh";
    puts(str);
    memset(str,'a',5);
    puts(str);
 
#ifdef __STDC_LIB_EXT1__
    set_constraint_handler_s(ignore_handler_s);
    int r = memset_s(str, sizeof str, 'b', 5);
    printf("str = \"%s\", r = %d\n", str, r);
    r = memset_s(str, 5, 'c', 10);   // count is greater than destsz  
    printf("str = \"%s\", r = %d\n", str, r);
#endif
}
Output
ghghghghghghghghghghgh
aaaaahghghghghghghghgh
str = "bbbbbhghghghghghghghgh", r = 0
str = "ccccchghghghghghghghgh", r = 22

In this program, the memset function, which is a standard C function, has been implemented. 
In order not to overlap the names with the standard function, 1 has been added to the end of 
the name of our function.The function has 3 parameter values. char * p = (char *) vp; The 
statement uses pointer arithmetic to handle the variable byte to byte. With the while(size--) 
statement, a loop is created that returns you times. Inside the loop * p ++ = val; With the 
statement, each address value is set with the value of val. The next address is reached with 
the ++ statement.Finally, with return vp, the address of the desired variable is returned with 
its own address.Test codes were written in the main function for the Memset1 function. 

A 100-element array of random numbers is defined in the test codes. Starting from the desired 
element of the array, the desired number of elements has been cleared. These numbers have been 
requested from the user. For example, if the user entered 20 as the first number and 40 as the 
second number, if the parameter val is 0, starting from the indexed 20 element of the array, 
the 40 element is set to 0.

Good work and Best Regards.