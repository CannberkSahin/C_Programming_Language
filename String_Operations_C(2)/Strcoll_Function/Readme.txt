Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

The C strcoll function is a String Function, used to compare two strings. 
The result of this function depends upon the LC_COLLATE settings. 
The strcoll method returns any of the following values:
-------------------------------------------------------
*It will return -1 if str1 is less than str2
*It returns +1 if str1 is greater than str2
*and this function will return 0 if str1 and str2 are equal

strcoll: Defined in header <string.h>
=====================================
int strcoll( const char *lhs, const char *rhs );

Compares two null-terminated byte strings according to the current locale as defined 
by the LC_COLLATE category.

Parameters
==========
lhs, rhs - pointers to the null-terminated byte strings to compare

Return value
============
-Negative value if lhs is less than rhs.
​-0​ if lhs is equal to rhs.
-Positive value if lhs is greater than rhs.

Notes
=====
Collation order is the dictionary order: the position of the letter in the national alphabet 
(its equivalence class) has higher priority than its case or variant. Within an equivalence 
class, lowercase characters collate before their uppercase equivalents and locale-specific 
order may apply to the characters with diacritics. In some locales, groups of characters 
compare as single collation units. For example, "ch" in Czech follows "h" and precedes 
"i", and "dzs" in Hungarian follows "dz" and precedes "g".
(Cited: cppeferance.com)

Example
=======
#include <stdio.h>
#include <string.h>
#include <locale.h>
 
int main(void)
{
    setlocale(LC_COLLATE, "cs_CZ.iso88592");
 
    const char* s1 = "hrnec";
    const char* s2 = "chrt";
 
    printf("In the Czech locale: ");
    if(strcoll(s1, s2) < 0)
         printf("%s before %s\n", s1, s2);
    else
         printf("%s before %s\n", s2, s1);
 
    printf("In lexicographical comparison: ");
    if(strcmp(s1, s2) < 0)
         printf("%s before %s\n", s1, s2);
    else
         printf("%s before %s\n", s2, s1);
}
Output:
In the Czech locale: hrnec before chrt
In lexicographical comparison: chrt before hrnec

Good work and Best Regards.