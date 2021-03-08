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

Inverting the elements of an array is often used in the C language. The algorithm for inverting the array is simple, 
but there are many ways to implement it in the C language. This algorithm is usually implemented with pointers.
A function named reverse_array is written in this program. The function requests the address of the first element of 
the array and the value of the size of the array. To access the end of the array, a pointer variable named pe has 
been defined. The variable pe pointer holds the address of where the index ends. Next, a while loop was created. 
The condition of the while loop is p less than pe. Therefore, we didn't have to take half the value of the array's size.
As long as the loop condition is true, we have inverted the array by swapping the elements of the array. 
Pointer idiom is used in the function named Swap.

Good work and Best Regards.