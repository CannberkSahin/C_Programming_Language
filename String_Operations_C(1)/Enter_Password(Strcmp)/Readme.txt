Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

strcmp: Defined in header <string.h>
====================================
int strcmp(const char *lhs, const char *rhs); //Function Prototype

Compares two null-terminated byte strings lexicographically.
The sign of the result is the sign of the difference between 
the values of the first pair of characters (both interpreted as unsigned char) 
that differ in the strings being compared.
The behavior is undefined if lhs or rhs are not pointers to null-terminated byte strings.

Parameters
==========
lhs, rhs - pointers to the null-terminated byte strings to compare

Return value
============
Negative value if lhs appears before rhs in lexicographical order.
Zero if lhs and rhs compare equal.
Positive value if lhs appears after rhs in lexicographical order.

Strcmp functions are generally used to compare two articles. In this example 
it is tested whether a predetermined password is correct. A char array named 
psw was created in the program and black cat was given as the initial value 
to this array.(static char psw[] = "black cat";)
Then the user was asked to enter the password. The password entered by the 
user is stored in an array called psw. Finally, the names in these two arrays 
are tested with the strcmp function. An idiom is used inside the if control statement.
If the password entered by the user is correct, if the password is not written 
correctly on the screen, the password is written incorrectly on the screen.

Good work and Best Regards.