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

Example
=======
#include <string.h>
#include <stdio.h>
 
void demo(const char* lhs, const char* rhs)
{
    int rc = strcmp(lhs, rhs);
    const char *rel = rc < 0 ? "precedes" : rc > 0 ? "follows" : "equals";
    printf("[%s] %s [%s]\n", lhs, rel, rhs);
}
 
int main(void)
{
    const char* string = "Hello World!";
    demo(string, "Hello!");
    demo(string, "Hello");
    demo(string, "Hello there");
    demo("Hello, everybody!" + 12, "Hello, somebody!" + 11);
}
Output:
[Hello World!] precedes [Hello!]
[Hello World!] follows [Hello]
[Hello World!] precedes [Hello there]
[body!] equals [body!]
(Cited: cppreference.com)

The stricmp function is written in this program. The name of the function is specified 
as stricmp. The meaning of the letter i in the function name means insensitive case.
The function has two parameters. These parameters require the addresses of two names to be compared.
Simply, if the first name is large, a positive value will be returned. If the second name is large, 
a negative value will be returned. If the two names are equal, a zero value will be returned.
As long as the toupper(*p1 == *p2) condition is true, a while loop is created that returns.
Then * p1 ++ and * p2 ++ are written. Exits if the loop is not equal to *p1 ,*p2.(*p1 != *p2)
In this case, the expression *p1 - *p2 can be written as return after the loop. toupper(return *p1 - *p2)
If *p1 is greater *p2 returns positive value if *p1 is smaller *p2 returns a negative value.
If the last two numbers are equal, it is applied. If two texts are equal, it means they are equal, 
including the null character at the end.So if *p1 equals a null character in any round of the while loop,
then *p2 is also a null character. In this case too, the two texts are equal and the function returns 0. 
(if (*p1 == '\0')).

The C language is a case sensitive language.Therefore, attention should be paid to case sensitivity 
when comparing two names or words. However, there is no need for case sensitivity in biceps programs. 
For example, compare two names. The first of these is the word table and the other is the word MASA.
Normally, both words are the same to people. The only difference is that one is in lowercase and the 
other is in capital letters. However, these two words are perceived differently in C language.
A function named stricmp has been written to eliminate the difference described in this program.
The only difference from the strcmp function is that the words that are compared are compared with the 
toupper function. The toupper function is also used on the return of the function. Thus, the capitalization 
problem has been eliminated.

Good work and Best Regards.