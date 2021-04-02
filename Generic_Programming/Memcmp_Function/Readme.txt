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

memcmp function
===============
int memcmp( const void* lhs, const void* rhs, size_t count);

Compares the first count characters of the objects pointed to by lhs and rhs. The comparison is done lexicographically.
The sign of the result is the sign of the difference between the values of the first pair of bytes (both interpreted as 
unsigned char) that differ in the objects being compared.
The behavior is undefined if access occurs beyond the end of either object pointed to by lhs and rhs. The behavior is 
undefined if either lhs or rhs is a null pointer.

Parameters
==========
lhs, rhs - pointers to the objects to compare
count	 - number of bytes to examine

Return value
============
Negative value if lhs appears before rhs in lexicographical order.
Zero if lhs and rhs compare equal, or if count is zero.
Positive value if lhs appears after rhs in lexicographical order.

Example
=======
#include <stdio.h>
#include <string.h>
 
void demo(const char* lhs, const char* rhs, size_t sz)
{
    for(size_t n = 0; n < sz; ++n)
        putchar(lhs[n]);
 
    int rc = memcmp(lhs, rhs, sz);
    const char *rel = rc < 0 ? " precedes " : rc > 0 ? " follows " : " compares equal ";
    fputs(rel, stdout);
 
    for(size_t n = 0; n < sz; ++n)
        putchar(rhs[n]);
    puts(" in lexicographical order");
}
 
int main(void)
{
    char a1[] = {'a','b','c'};
    char a2[sizeof a1] = {'a','b','d'};
 
    demo(a1, a2, sizeof a1);
    demo(a2, a1, sizeof a1);
    demo(a1, a1, sizeof a1);
}
Output:
abc precedes abd in lexicographical order
abd follows abc in lexicographical order
abc compares equal to abc in lexicographical order

The memcmp function, which is a standard C function, has been implemented in this program. 
The name of the function has 1 added at the end to avoid confusion with the standard function.
The function has 3 parameter variables. Parameter variables are const since the function will 
only access addresses for reading purposes. The 3rd parameter requires the size of the memory 
blocks for comparison. Memcmp compares two memory blocks of n bytes at two addresses, which it 
takes as parameters. If the comparison result is the size of the first memory block, that is, 
if the first memory block is large, it returns a positive value, if the second memory block is 
large, it returns a negative value, but if the two memory blocks are equal, it returns 0. 
const unsigned char * p1 = vp1; The statement converts the void * type to unsigned char. Thus, 
the unsigned char type can be dereference. With the while (n--) statement, a loop is created 
that returns n times. The if (* p1! = * p2) statement tests whether the memory blocks are mutually 
equal. Expressions ++ p1 and ++ p2 are written to compare with the order of memory blocks. 
If any of the memory blocks are not equal, the function return * p1> * p2? 11th; returns with 
expression. This means that if the first memory block is large, it will return a value of 1, if 
the second memory block is large, it will return a value of -1. If the program has not entered 
the if statement, then the two memory blocks are equal. In this case, the function returns 0.

Test codes were written in the main function for the function named memcmp1, which is implemented 
in the program. In the main function, two arrays named a and b of int type and 100 elements are 
defined. The array named a is filled with random numbers. Then, using the memcpy function, the 
elements of the array a are copied to the array b. It has been printed on the screen in two arrays.
Next, the two arrays are compared with the memcmp1 function. Since the two series are the same, 
"yes equal" is read on the screen. Then the value of a random element of the b array is incremented by 1.
When the arrays were compared again, "not equal" was read on the screen. Thanks to the pointer arithmetic, 
two arrays can be compared starting from the desired element of the two arrays. To illustrate this, the 
statement if (! Memcmp1 (a + 10, b + 50, 10 * sizeof (int))) has been written. A comparison is made 
starting from the 10th element of the a array and the 50th element of the b array.

Good work and Best Regards.