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

The return value of an array in the C language can be a pointer, ie an address.
However, care should be taken when using a function whose return value is an address. 
If the array returns the address of an automatic storage variable, the client code using this will cause 
undefined behavior. If the return value of the function is the address of a static variable, then there is no problem.
However, if the return value is the value of a static variable, it should be noted again.
Because in this case, if the function calls are made one after the other, the same values are obtained since the 
result of all calls will be the address of the same static variable. An example of the situation described above 
is given in this program. First, a function named get_random_day with return value type char * and no parameter 
value is defined. A statically named str array is defined inside the function. 
The address of the str array was sent to the client code by typing a random day's value from the days of the week 
into this array. Client script has called the function 4 times. However, since the variable is static, the same 
values were obtained even though the function was called 4 times.

Good work and Best Regards.