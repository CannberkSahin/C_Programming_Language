Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

There are standard libraries in the C language. Examples of these are <stdio.h>, <stdlib.h> etc.
Examples of these are the functions gets and puts.In order to write text on the screen, 
the operations called input and output are performed. Mostly formatted input and output operations 
are used in C language. For this, it is necessary to import the stdio library. The printf and scanf 
functions are formatted I/O functions. However, unlike these, unformatted I/O operations are also used. 
Examples of these are the functions gets and puts. The prototype of the puts function is 
int puts(const char *str); The prototype of the puts function is int puts (const char * str);
The address of the text to be printed on the screen is sent to the function as an argument.
There are two ways to send the text address. First, a char type array is defined and filled with the 
text desired to appear on the screen. Thanks to the decay array, the address of the first element of 
the array can be sent to the function. The other method should be written in double quotes inside the 
function. Thus, a string type expression is converted to an address by the compiler. 

puts: Writes every character from the null-terminated string str and one additional newline character 
'\n' to the output stream stdout, as if by repeatedly executing fputc.The terminating null character 
from str is not writte.

Return value: On success, returns a non-negative value
On failure, returns EOF and sets the error indicator (see ferror()) on stream.

Example:
#include <stdio.h>
 
int main(void)
{
    int rc = puts("Hello World");
 
    if (rc == EOF)
       perror("puts()"); // POSIX requires that errno is set
}
Output:
Hello World

In this program, puts function is implemented. Since it is a standard function in C language, 
the function name has been chosen as myputs. Thus, it does not interfere with the standard function 
and the error is prevented. A while loop is opened in the function to test whether the last 
character of the text is '\0' or not. This process is called null terminated by stream.
However, after the program exits the while loop, there are no null characters at the end of the text. 
Therefore, we must manually add the null character.

Good work and Best Regards.