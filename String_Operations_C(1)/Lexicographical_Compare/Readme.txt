Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

Lexicographic Order
===================
For similarly named ordering systems outside mathematics, see alphabetical order, natural 
sort order, lexicographic preferences, and collation.In mathematics, the lexicographic or 
lexicographical order (also known as lexical order, dictionary order, alphabetical order or 
lexicographic(al) product) is a generalization of the alphabetical order of the dictionaries 
to sequences of ordered symbols or, more generally, of elements of a totally ordered set.
There are several variants and generalizations of the lexicographical ordering. One variant 
applies to sequences of different lengths by comparing the lengths of the sequences before 
considering their elements.Another variant, widely used in combinatorics, orders subsets of 
a given finite set by assigning a total order to the finite set, and converting subsets into 
increasing sequences, to which the lexicographical order is applied.A generalization defines 
an order on a Cartesian product of partially ordered sets; this order is a total order if and 
only if all factors of the Cartesian product are totally ordered.

Lexicographic Compare Table
-----------------------------------------------------
Relation	 	stringA.compareTo(stringB)
-----------------------------------------------------
stringA	Less Than	stringB	Negative Integer (-1)
-----------------------------------------------------
stringA	Equal	        stringB	Zero (0)
-----------------------------------------------------
stringA	Greater Than	stringB	Positive Integer (1)
-----------------------------------------------------

Expression	Evaluates to	Explanation
=======================================================================================================
"Zebra".compareTo("ant")	Negative Integer	upper case 'Z' comes before lower case 'a'
"Apple".compareTo("apple")	Negative Integer	upper case 'A' comes before lower case 'a'
"apple".compareTo("orange")	Negative Integer	'a' comes before 'o'
"maple".compareTo("morning")	Negative Integer	'a' comes before 'o'
"apple".compareTo("apple")	Zero	                same length, same characters in same positions
"orange".compareTo("apple")	Positive Integer	'o' comes after 'a'
"applecart".compareTo("apple")	Positive Integer	longer string "applecart" comes after "apple"
"albatross".compareTo("albany")	Positive Integer	't' comes after 'n'
=======================================================================================================

In this program, Lexicographic Compare, ie dictionary ordering, is 
shown with strcmp, a standard function of the C language. 
Strcmp compares two string expressions.

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

Good work and Best Regards.