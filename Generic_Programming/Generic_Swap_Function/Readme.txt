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

Designing a swap function that swaps regardless of the type.
Generic Swap Funciton
=====================
Swap processing is the swap of two objects. Let's say we have two objects of type T. The generic swap function 
defines objects as arrays of bytes, ignoring the type of objects. For example, we can think of two objects with 
4 bytes of storage as two arrays of 4 bytes. If we can exchange these two objects byte to byte, we will be swapping 
ignoring the type of these two objects. 

Two Objects No important types
----------        -----------
|	 | <--->  |         |  --> char type (1 byte)
----------        -----------
|	 | <--->  |         |
----------        -----------
|	 | <--->  |         |
----------        -----------
|	 | <--->  |         |
----------        -----------

Thus, although we do not know the types of the two objects, we exchange the values of the two objects. Since we will 
make the swap operation to a function, the parameters of the function become void pointer. In the swap function, the parameters are void pointer, but the 
function will not know how many bytes to swap. Therefore, a parameter of generic functions takes the number of 
bytes, namely the sizeof value. Since the function is an incremental address type char *, it uses the byte value that comes with the sizeof parameter by 
assigning it to the type char *. 


Generic swap function is written in this program.The prototype of the function is 
void gswap(void * vp1, void * vp2, size_t size). The name of the function is gswap, which starts with the initial 
letter of the word generic. Void pointer is used in the parameter of the function.  The codes that call this 
function require the addresses of these two objects as parameters so that two objects of the same type can be swapped. 
The sizeof values of these objects are also the third parameter of the function. The type of the value generated 
by the size_t sizeof operator. Therefore, the alias of size_t type is used in the third parameter. Some code has 
been written in the main function to test the swap of two different types of objects. In the test codes, two objects 
of type int, two objects of type double and two arrays of type int are defined. Then, the function named gswap is 
called so that the parameter values are entered appropriately to swap objects defined in different types. 
gswap(&x,&y,sizeof(int)); and gswap(&x,&y,sizeof x); same function call.
In order to do the swap, you need a loop that returns you times. Because here is the number of bytes and it is 
necessary to be able to swap mutual bytes. Void pointers cannot be dereferenceed. Therefore, void pointers are 
given as the initial value to char type pointers. char * p1 = (char *) vp1; and char * p2 = (char *) vp2; With the 
commands,char pointers can be dereferenced because they depend on the type. Therefore, char pointers show the next 
byte if incremented by one, thanks to pointer arithmetic. char * p1 = (char *) vp1; In order to show that we have 
done the type conversion knowingly and willingly in the expression, (char *) expression is type cast operation.	
With the while (size--) statement, a loop is created that returns you times. Thus, the bytes of the two objects can 
be changed sequentially. With the while (size--) statement, a loop is created that returns you times. Thus, the 
bytes of the two objects can be changed sequentially. Inside the loop, * p1 and * p2 are swapped, and their values 
are increased by 1 to point to the next address. 

Good work and Best Regards.