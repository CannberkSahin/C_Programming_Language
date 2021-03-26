Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

Sometimes, in order to write some codes easier or to write more securely, a pointer 
array is initialized, while the last array element is initialized with a NULL pointer 
value.This is because when traversing the array you can create a loop that returns 
as long as any element of the array is not a NULL pointer.In this program, a pointer 
array consisting of 300 element names is defined. The last element of the array is 
a NULL pointer. Within the main function, a while(p[i]! = NULL) statement returns a 
loop that returns unless the element of the array is a NULL pointer. Then puts(p[i++]); 
expression is written into the loop. Since the NULL pointer is the last element of the 
array, all elements of the array will be written to the screen. This process is also 
called null terminated by string.The puts function provides the new line character. 
Therefore, the names will be printed on the screen one under the other.

Good work and Best Regards.