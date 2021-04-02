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

//Define Generic Search Function
void *gsearch(const void *vpa, size_t size, size_t sz_elem, const void *vpkey)
==============================================================================
A generic search function is written in this program. A function is a function that looks for a value in an array 
and is named gsearch regardless of the type. The return type of the function is void *. The function has 4 parameters.
The first parameter is the address of the array to be searched, the second parameter is the size of the array where 
the search will be made, the third parameter is the sizeof value of an element of the array to be searched, and the 
last parameter is the address of the variable that holds the value to be searched. If the function finds the searched 
value, it returns the address of the place it found. If not, it returns a Null pointer. const char * p = vpa; With 
statement, void pointer type is converted to const char * type. This is because void pointer cannot be dereferenceed. 
In addition, since the type coming to the function is unknown, the array is processed as byte. With the 
if(!memcmp(p, vpkey, sz_elem)) statement, the searched value in the array is questioned. p + = sz_elem; The next 
element of the array is reached with the expression.If the function finds the searched value return (char *) p; 
Returns the address of the value found with the expression. If not found it returns a null pointer.

Test codes are written in the main function to test the function. In the test codes, a 100-element array with random 
numbers of type a named a is defined. A variable named sval is defined for the value to be searched. Then a pointer 
variable named ptr is defined to keep the return value of the function. The value to be searched has been taken from 
the user. Then the search function was called and its value was searched. The return value of the function is assigned 
to the pointer variable named ptr. Then, it is checked whether ptr variable is equal to null pointer and whether the 
searched element is found or not is written on the screen. The value to be searched has been taken from the user. 
Then the search function was called and its value was searched. The return value of the function is assigned to the 
pointer variable named ptr. Then, it is checked whether ptr variable is equal to null pointer and whether the searched 
element is found or not is written on the screen.

Good work and Best Regards.