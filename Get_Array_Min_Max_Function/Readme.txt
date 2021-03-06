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

In this program, it is desired to have both the smallest element and the largest element of a array of random numbers.
In this case, the function has to sent two separate return values to the client code.
However, in C language, a function can only pass one return statement. 
The only way to do this is to use the call by reference method. 
In this program, there are 4 separate parameters that both request the address of the directory, request the size, 
and request the address of the min and max variables that are used to pass the smallest and largest number.
Thus, the function can send the two values that calculate the min and max values to the 
client code at the same time with the pointer method. 
The algorithm of the program simply accepts the first element of the array as both the largest and the smallest value first. 
For this, *pmin = *pmax = *p; statement is used. The assignment process here is called chain assignment.
The reason this code is valid is that the assignment in C language is the left associative.
Next, a for loop is created with the size of the array's elements. If the element is smaller than min, 
it is updated to be the smallest element, otherwise If the element is bigger than max, it is updated to be 
the biggest number.The program writes the min and max values it finds to the addresses of these variables.
Thus, we have sent two values to the client code with the pointer method.

Good work and Best Regards.