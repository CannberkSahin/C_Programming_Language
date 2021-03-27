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

In this program, a function that prints the elements of the char pointer array consisting of 300 elements on 
the screen is written. In addition, a function that lists the names written on the screen in ascending order 
is also written and the names are printed on the screen in order. Functions that want to operate on an array 
whose elements are char * type get the address and size of the array. The name of the function that prints 
names on the screen is print_names. The function has two parameters. The first one asks for the address of 
the directory, the other for the size.The address of the first element of the array is passed to the function. 
Since the elements of the array are of type char *, it will send the address of the first element to the function. 
So the type of the first parameter of the function will be char **. The return type of the function is void.
The function can be written in two different ways.The first method is written with the for loop and the second 
method with the while loop. First method with the statement for(size_t i = 0; i <size; ++ i), the elements of 
the array are traversed. printf("% 6s", pa [i]); The expression will print the elements of the array on the screen.
In the second method with the statement while(size--) the elements of the array are traversed. printf("%6s ",*pa++);
The expression will print the elements of the array on the screen. In order not to confuse the names of the functions, 
the numbers 1 and 2 are added to the end of their names. After printing the elements of the array on the screen, 
this pointer array with char * elements is sorted. A function named sort_names has been written to perform the 
sorting operation. The function takes two parameters. The type of the first parameter is char **.In other words, 
the first parameter requires the address of the first element of the array to be sorted. The second parameter 
requires the size of the array. Bubble sort sorting algorithm has been applied in the function. The strcmp function, 
which is a standard C function, is used in the sorting process.A function named pswap is written to replace two names 
in the sorting algorithm. The function swaps two char * pointer variables. The function is defined with the expression 
void pswap(char **p1, char **p2). The function has two parameters. char *ptemp = *p1; *p1 = *p2; , *p2 = ptemp; 
Two char *p pointers are swapped with statements. Thus, in the application, both the names in the series are printed 
on the screen and these names are in ascending order. In other words, the names starting with the letter a go to the 
beginning, while the names starting with the letter z are ending.

Good work and Best Regards.