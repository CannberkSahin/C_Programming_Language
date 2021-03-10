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

Search operations in arrays are frequently used in the C language. Therefore, the standard library of the C 
language has search functions. For this reason, a function that performs a search in an array has been aged in the program.
If the function finds the searched object, it returns the address of the object it found. If not, it returns a NULL pointer.
The name of the function is search_in_array. The return value type of the function is int *. The function has 3 parameters. 
One of the parameters requests the address of the searched object, the other asks for the value of the array size.
The last parameter is the value of the searched element. The search algorithm in the function has been implemented in two methods.
The first method is done with a normal for loop. In the second method, an idiomatic structure is used.



Good work and Best Regards.