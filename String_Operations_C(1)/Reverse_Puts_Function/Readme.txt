Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

Text operations in the C language are used frequently. This includes printing the text backwards.
There is no standard C function that prints text in reverse. For this, we will implement the 
function that prints the text in reverse. In doing so, the puts function used in unformatted input 
and output operations will be used. The name of the function is reverse_puts.
The function has one parameter. The parameter requires the address of the text to be printed in reverse.
To print the text reverse, it is necessary to reach the last character of the text. 
For this, a standard C function strlen is used. The length of the array is found with the strlen function. 
This means the length of the text. However, the character we find with strlen is the null ('\0') character 
at the end of the text. For this, the last character of the text is reached by subtracting 1 from the 
number obtained as a result of strlen. A for loop has been created to print the text in reverse. Then, 
with the for loop, the text from the last character to the first character of the text was printed on 
the screen with puts function.

Good work and Best Regards.