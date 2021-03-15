Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

There are many standard functions for string operations in C language. In this program, 
a standard C function strlen function is implemented. The function calculates the length of a text.
The parameter variable is the address of the text and the return value is the length of the text.
strlen function has been written with 3 methods. The names of these functions are named as 
strlen1, strlen2, strlen3. This is because the names collide.

strlen: Defined in header <string.h>
====================================
size_t strlen(const char *str );	
size_t strnlen_s(const char *str, size_t strsz);

1) Returns the length of the given null-terminated byte string, that is, the number of characters 
in a character array whose first element is pointed to by str up to and not including the first 
null character. 
The behavior is undefined if str is not a pointer to a null-terminated byte string.

2) Same as (1), except that the function returns zero if str is a null pointer and returns strsz 
if the null character was not found in the first strsz bytes of str.
The behavior is undefined if both str points to a character array which lacks the null character 
and the size of that character array < strsz; in other words, an erroneous value of strsz does not 
expose the impending buffer overflow.
As with all bounds-checked functions, strnlen_s is only guaranteed to be available if __STDC_LIB_EXT1__ 
is defined by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer 
constant 1 before including string.h.

Parameters
==========
str   -	pointer to the null-terminated byte string to be examined
strsz -	maximum number of characters to examine

Return value
============
1) The length of the null-terminated byte string str.
2) The length of the null-terminated byte string str on success, zero if str is a null pointer, 
strsz if the null character was not found.
(Cited: cppreference.com)

The first method for the strlen function is the classical pointer method.
A counter variable is defined to count the elements of the array.
You can go through the while loop until the null character at the end of the text.
The counter variable is incremented by one for the non-null character element, that is, for each 
element of the text. The function returns the value of the counter variable.

The second method for the strlen function is the classical pointer idiom.
The same operations are done in the first method, but in this method, * p ++! = '\0' is written 
into the while loop. This expression is an idiom in the C language.


The third method for the strlen function is the marginal pointer idiom.
The name of the function is strlen3. The value of p is kept in another variable named ptemp.
Pointer idiom is written in while loop. If we subtract ptemp from p at the exit of the loop, 
we get the length of the text (p - ptemp). With this operation, we extract the starting address of the text 
from the address where the null character is located. Pointer arithmetic is used here.

Good work and Best Regards.