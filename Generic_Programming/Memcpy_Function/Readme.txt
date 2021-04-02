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

memcpy function
===============
void* memcpy( void *dest, const void *src, size_t count);

1) Copies count characters from the object pointed to by src to the object pointed to by dest. Both objects 
are interpreted as arrays of unsigned char.The behavior is undefined if access occurs beyond the end of the 
dest array. If the objects overlap (which is a violation of the restrict contract) (since C99), the behavior 
is undefined. The behavior is undefined if either dest or src is an invalid or null pointer.
2) Same as (1), except that the following errors are detected at runtime and cause the entire destination 
range[dest, dest+destsz) to be zeroed out (if both dest and destsz are valid), as well as call the currently 
installed constraint handler function:
--------------------------------------
dest or src is a null pointer
destsz or count is greater than RSIZE_MAX
count is greater than destsz (buffer overflow would occur)
the source and the destination objects overlap
 
The behavior is undefined if the size of the character array pointed to by dest < count <= destsz; in other words, 
an erroneous value of destsz does not expose the impending buffer overflow.
As with all bounds-checked functions, memcpy_s is only guaranteed to be available if __STDC_LIB_EXT1__ is defined 
by the implementation and if the user defines __STDC_WANT_LIB_EXT1__ to the integer constant 1 before including string.h

Parameters
==========
dest	- pointer to the object to copy to
destsz	- max number of bytes to modify in the destination (typically the size of the destination object)
src	- pointer to the object to copy from
count	- number of bytes to copy

Return value
============
1) Returns a copy of dest
2) Returns zero on success and non-zero value on error. Also on error, if dest is not a null pointer and 
destsz is valid, writes destsz zero bytes in to the destination array.

Example
=======
#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>
 
int main(void)
{
    // simple usage
    char source[] = "once upon a midnight dreary...", dest[4];
    memcpy(dest, source, sizeof dest);
    for(size_t n = 0; n < sizeof dest; ++n)
        putchar(dest[n]);
 
    // setting effective type of allocated memory to be int
    int *p = malloc(3*sizeof(int));   // allocated memory has no effective type
    int arr[3] = {1,2,3};
    memcpy(p,arr,3*sizeof(int));      // allocated memory now has an effective type
 
    // reinterpreting data
    double d = 0.1;
//    int64_t n = *(int64_t*)(&d); // strict aliasing violation
    int64_t n;
    memcpy(&n, &d, sizeof d); // OK
    printf("\n%a is %" PRIx64 " as an int64_t\n", d, n);
 
#ifdef __STDC_LIB_EXT1__
    set_constraint_handler_s(ignore_handler_s);
    char src[] = "aaaaaaaaaa";
    char dst[] = "xyxyxyxyxy";
    int r = memcpy_s(dst,sizeof dst,src,5);
    printf("dst = \"%s\", r = %d\n", dst,r);
    r = memcpy_s(dst,5,src,10);            //  count is greater than destsz  
    printf("dst = \"");
    for(size_t ndx=0; ndx<sizeof dst; ++ndx) {
        char c = dst[ndx];
        c ? printf("%c", c) : printf("\\0");
    }
    printf("\", r = %d\n", r);
#endif
}
Output:
once
0x1.999999999999ap-4 is 3fb999999999999a as an int64_t
dst = "aaaaayxyxy", r = 0
dst = "\0\0\0\0\0yxyxy", r = 22

In this program, a standard C function memcpy function is implemented.As can be seen in the definition 
of the function, it has 3 parameters.The return type of the function is void *.  The first parameter is 
the target address, the second parameter is the source address, and the third parameter is how many bytes 
of memory blocks will be copied. To copy byte to byte in function char *pdest = vpdest; and 
char *psource = vpsource; statements were written. There is no type cast with char * here. In this case, 
the compiler implicitly makes the type conversion automatically. With the while (size--) statement, a loop 
is created that returns you times. Inside the loop *pdest++ = *psource++; statement was written. According 
to this expression, the value in * psource will be assigned to * pdest. The next address is reached with 
the ++ statement. return vpdest; returns the target address from which the function address is received 
with the statement.

Test codes are written in the main function for the Memcpy1 function. First, a 100-element array named a 
is defined, consisting of random numbers. Next, an empty array named b is defined, consisting of 100 elements. 
With the Memcpy1 function, the elements in array a are copied to b array and printed on the screen.

Good work and Best Regards.