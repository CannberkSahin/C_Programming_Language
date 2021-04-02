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

void *greverse_array(void *vpa, size_t size, size_t sz_elem)
============================================================
In this program, a function that reverses a type independent array is designed and tested. The name of the function 
is greverse_array. The function has 3 parameters. The first parameter requests the address of the directory to be 
reversed. The second parameter requires the size of the array. The third parameter requires the sizeof value of an 
element of the array. The return value is the address of the directory it reversed. The function has been implemented 
in two ways. Therefore, the numbers 1 and 2 are added to the end of the function names. char * p = vpa; The pointer 
variable can be dereference possible thanks to the statement. A loop is created with for (size_t i = 0; i <size / 2; ++i) 
that returns size / 2 times. To reverse the array, swap the leading element and the trailing element halfway through 
the array. For this, the address of the first element of the array and the address of the last element must be accessed.
With the expression p + i * sz_elem, the first element of the array is reached for the value i = 0. The expression 
p + (size - 1 - i) * sz_elem has reached the last element of the array for i = 0. The elements of the array have been 
swapped by calling the gswap function written earlier in the loop. Function return vpa; It returns the address of the 
array it reversed with the expression. Another implementation is as follows: 
At the very beginning of the function pointer variables that hold the start and end addresses of the array are defined. 
These are:
char *ps = vpa; //array starting address
char *pe = ps + size * sz_elem; //the address of where the array ends
With the while (ps <pe) statement, a loop that returns as long as ps pe is less than is created. So the loop will run 
size / 2 times. pe - = sz_elem; The last element of the array is reached with the expression. Then, the memory block 
at ps address and the memory block at pe address were swapped with the function named gswap. (gswap(ps,pe,sz_elem);)
ps + = sz_elem; The statement makes ps point to the next object. Finally, the function return vpa; in other words, it 
returns with the address of the directory it reversed.

Test codes are written in the main function to test the function. Two arrays of type int and double are defined. Arrays 
are reversed by calling the greverse_array function. The reversed arrays are printed on the screen. A function named 
display_array in the library named mutility is used to print arrays of int type to the screen. However, since there is 
no ready function to print a double type array on the screen, the array named b is printed on the screen with a for loop.

Good work and Best Regards.