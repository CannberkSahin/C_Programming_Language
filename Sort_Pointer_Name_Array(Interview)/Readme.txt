Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

This program shows the ordering of string literals in an array. The sorting criterion 
is to sort the elements of the array lexicograpically while at the same time sorting 
the string literals among themselves from short to long. Bubble sort algorithm is used 
for sorting. The length of the string literals are compared with the strlen function 
and their size with the strcmp functions.In order not to call the strlen function twice 
in the program, the lengths of the string literals cannot be stored in variables in the 
names len1 and len2 of type size_t.
Then the criterion statement was written for sorting. If len1 is greater than len2, or 
if len1 and len2 are equal in length and also the return value of the compare function 
is large, two elements from 0 are swapped. The expression in the C language is:
if(len1 > len || (len1 == len2 && strcmp(p[k],p[k+1]) > 0)
The order was made by writing the swap statement in the condition of if.


Good work and Best Regards.