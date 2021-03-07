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

An important pointer idiom is shown in the program. In the same expression, 
the asterisk and the ++ operator are used together. A 5-element array named a is defined.
The address of the first element of the array is given as the initial value to the pointer variable named ptr.
* ptr ++ expression is assigned a value of 55. The first element of the array was 55. This is because the 
suffix plus plus operator produces the value 55. These operators are at the second priority level and are 
rigth associative. Therefore, first the plus operator occurs, generates the value 55, and then the value 
of the object is obtained with the content operator. Finally, the object is assigned a value of 55.
When the next statement is passed, the address value increases by one due to the side effect of the 
plus plus operator, that is, the second element of the array is passed. 
*ptr = 77; The expression is assigned a value of 77 to the second element of the array.

Good work and Best Regards.