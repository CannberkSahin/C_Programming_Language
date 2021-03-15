Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

Strcat is a function that adds a text to the end of a another text. If strcpy is 
the assignment operator of strings, then strcat is like the plus equal operator of strings.
The name cat at the end of the strcat function is short for concatenate. 

strcat: Defined in header <string.h>
====================================
char *strcat(char *dest, const char *src);
char *strcat(char *restrict dest, const char *restrict src);
restrict type qualifier:Restrict semantics apply to lvalue expressions only; for example, 
a cast to restrict-qualified pointer or a function call returning a restrict-qualified pointer 
are not lvalues and the qualifier has no effect.
During each execution of a block in which a restricted pointer P is declared (typically each 
execution of a function body in which P is a function parameter), if some object that is accessible 
through P (directly or indirectly) is modified, by any means, then all accesses to that object 
(both reads and writes) in that block must occur through P (directly or indirectly), otherwise 
the behavior is undefined.With the keyword Restrict, an address is said to be reserved exclusively.

1) Appends a copy of the null-terminated byte string pointed to by src to the end of the 
null-terminated byte string pointed to by dest. The character src[0] replaces the null terminator 
at the end of dest. The resulting byte string is null-terminated.
The behavior is undefined if the destination array is not large enough for the contents of both 
src and dest and the terminating null character. The behavior is undefined if the strings overlap. 
The behavior is undefined if either dest or src is not a pointer to a null-terminated byte string.

2) Same as(1), except that it may clobber the rest of the destination array (from the last character 
written to destsz) with unspecified values and that the following errors are detected at runtime and 
call the currently installed constraint handler function:
*src or dest is a null pointer
*destsz is zero or greater than RSIZE_MAX
*there is no null terminator in the first destsz bytes of dest
*truncation would occur (the available space at the end of dest would not fit every character, 
including the null terminator, of src)
*overlap would occur between the source and the destination strings

The behavior is undefined if the size of the character array pointed to by 
dest <strlen(dest)+strlen(src)+1 <= destsz; in other words, an erroneous value of destsz does not expose 
the impending buffer overflow. As with all bounds-checked functions, strcat_s is only guaranteed to be 
available if __STDC_LIB_EXT1__ is defined by the implementation and if the user defines 
__STDC_WANT_LIB_EXT1__ to the integer constant 1 before including string.h.

Parameters
==========
dest	- pointer to the null-terminated byte string to append to
src	- pointer to the null-terminated byte string to copy from
destsz	- maximum number of characters to write, typically the size of the destination buffer

Return value
============
1) returns a copy of dest
2) returns zero on success, returns non-zero on error. Also, on error, writes zero to dest[0] 
(unless dest is a null pointer or destsz is zero or greater than RSIZE_MAX).

Example
=======
#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h> 
#include <stdio.h>
#include <stdlib.h>
 
int main(void) 
{
    char str[50] = "Hello ";
    char str2[50] = "World!";
    strcat(str, str2);
    strcat(str, " ...");
    strcat(str, " Goodbye World!");
    puts(str);
 
#ifdef __STDC_LIB_EXT1__
    set_constraint_handler_s(ignore_handler_s);
    int r = strcat_s(str, sizeof str, " ... ");
    printf("str = \"%s\", r = %d\n", str, r);
    r = strcat_s(str, sizeof str, " and this is too much");
    printf("str = \"%s\", r = %d\n", str, r);
#endif
}

Possible output:
Hello World! ... Goodbye World!
str = "Hello World! ... Goodbye World! ... ", r = 0
str = "", r = 22
(Cİted: cppreferanc.com)

In the program, strcat function has been written with 3 different methods.
Functions are named as strcat1 to avoid name conflicts with the standard C function strcat.
In the first method, two pointer idioms are used. In the first method, two pointer idioms are used.
This is because the function returns with the address pdest at the end. This is because the function 
returns with the address pdest at the end. The last character in the destination array was found 
with the while idiom. The second idiom is copying from array to array.After adding the text to the 
end of the array, it is returned with the pdest address.

In the second method, strcpy and strlen functions are used.With the expression pdest + strlen (pdest), 
the last element of destination is obtained. Then, the first argument of the strcpy function is passed 
to this expression and the psorce address is passed to its second argument. Thus, the name in the 
source array has been added to the end of the target array.

In the third method, as in the second method, strcpy and strchr functions are used.
The last element of the destination array is obtained by giving the arguments 
(pdest, '\0') to the strchr function. With the return value obtained, psource is also 
sent as an argument to the strcpy function.The address obtained became the return value of the function.

Good work and Best Regards.