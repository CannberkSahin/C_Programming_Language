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

In this program, a series was created using the mutility library. 
Then it is wanted to find out what the smallest element of this array is.
A function named get array min was written for this.
If the algorithm is simply explained, initially the first element of the array is considered the smallest element, 
then with the if check value it is checked that the other element of the array is less than the min element in 
the next round of the loop. If the element is smaller than min, it is updated to be the smallest element, 
otherwise min remains the smallest element again. This situation continues until the for loop ends. 
When the loop is over, the smallest element is sent to the client code with a retrun statement.

Good work and Best Regards.