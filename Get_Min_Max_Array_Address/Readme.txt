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

A function that finds the addresses of the largest and smallest element of an array is written 
in the program. In other words, a function is defined that passes the address of both the largest 
and the smallest element of an array whose elements are of type int to the calling code. Since the 
value that the function will pass is of type int *, the code that calls the function must send the 
addresses of variables of type int *. A function is designed with;
void get_min_max_address(const int * pa, size_t size, int ** pmin, int ** pmax) to pass the address 
of the largest and smallest element of an array to the calling code. The name of the function is 
get_min_max_address. There are 4 parameters in the function. The first parameter requires the address 
of the first element of the array whose address is the largest and smallest element to be found.
The second parameter requires the size of the array. Since the function will pass two addresses, 
the pointer named min and max requests the addresses of the variables. Thus, the function can pass 
the addresses of the largest and smallest elements with these variables.Test codes have been written 
to test the function. These codes are in the main function. int * ptr_min, * ptr_max; With the statement, 
pointer variables that will keep the address of the smallest and largest elements of the array in the 
main program are defined.The function is called and return values are kept in pointer variables.
Then swap (ptr_max, ptr_min); The expression replaces the largest element and the smallest element of 
the array. As for the function codes, in the min max algorithm, the first element of the array is initially 
considered both the largest and the smallest, then the array is scrolled and the max and min values are 
updated for each element of the array.*pmin = *pmax = (int *) pa; With the statement, the first element 
of the array is considered both the largest and the smallest.Conversion from const int * to int * is 
undefined behavior. However, in some cases this event will not be used as undefined behavior. As in this 
example, the address value of pa is converted to int * type by making const cast.Then, to find the largest 
and smallest element of the array, the array is traversed starting from the index 1 element. Because the 
first element is considered to be both the largest and the smallest element. If the element with index 
i of the array in the received address is greater than ** pmax, the element with index i is updated as 
the largest element. Likewise, the smallest element of the array can be found. Note that the return value 
type of the function is the address. Const cast operation is performed while finding the largest element 
and the smallest element. For example *pmax = (int *)(pa + i); The type of the expression pa + i  in 
the expression is const int * because of pa. However, the type of * pmax expression is int *. Therefore, 
the const cast process is done to indicate that we have done this knowingly and willingly. Likewise, the 
const cast operation is done while finding the smallest element of the array. (*pmin = (int *)(pa + i);).
Finally, the array was printed on the screen by replacing the largest and smallest element of the array 
with the swap function.


Good work and Best Regards.