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

The algorithm for inverting an array is often used in the C language.
A 20-element array is created in this program. This is because you can see that the index is inverted.
In this program, the reverse algorithm with pointer arithmetic, one of the idioms of C, has been implemented.
First, an integer variable named n is given half of the array size as the initial value.
Then the address of the last element of the array is given as the initial value to a pointer variable named *pe.
Then a while loop is created, which returns n times. The swap function has been used in this loop. p++ and --pe 
statements are written inside the swap function. The reason why p ++ is written is that the ++ expression with 
suffix sends the value of the variable to the function as the parameter value, then its value increases by 
one due to the side effect. At our request, starting from the first element of the array, it is to do the swap operation.
Then the second parameter of the swap function is written as --pe. The reason for this is to pass the address of the 
last element of the array to the swap function. The - operator, which is in the prefix position in the --pe statement, 
first increments the value of the expression and then it is sent to the swap function as the parameter value.
Since the address we have is the last block of the byte of the last element of the array, we need the previous 
address to reach the last element. Hence the prefix - operator is used. Thus, starting from the first element of the array,
the reverse process is made with the last element and when it reaches the median value, the reverse process stops.

Good work and Best Regards.