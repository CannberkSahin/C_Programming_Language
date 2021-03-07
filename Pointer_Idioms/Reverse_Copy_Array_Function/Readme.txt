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

A function is written in the program that copies a array to another array in reverse.
While writing a function, an idiom used for pointer is shown in C language.
The name of the function is reverse copy array. The function requires 3 parameter values.
These are the address of the array b to be copied, the address of the array a, and the size of these arrays.
In the function, the value of size has been added to the psource address. Thus psource points to the end of the array.
In the function, the value of size has been added to the psource address. Thus psource points to the end of the sequence.
For this reason, * - psource expression is used in the while loop to access the last element of the array. 
Thus, thanks to the - operator, the last element of the array is accessed first. 
Then, during the loop, the elements of the a array are inverted and copied to the b array.

Good work and Best Regards.