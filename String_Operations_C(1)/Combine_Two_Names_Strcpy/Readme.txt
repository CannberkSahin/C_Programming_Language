Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

String operations are frequently used in the C language. In particular, some text is 
placed in arrays with the strcpy function. In this program, combining two names entered 
by the user using the strcpy function is shown. For example, if the user enters two names, 
can and berk, the program will print the name canberk on the screen. 3 strings are 
defined in order to make name concatenation. Two of the strings will keep the names taken 
from the user, the other will shame the combination of these two names. First, we copied 
the name in the s1 array to the s2 function with the strcpy function. Then we need to copy 
the name in the s2 array to s3, but if we copy it directly, the name in s3 will be overwritten.
Therefore, the length of the text in the s3 array is found first. Then this length plus 
the new name is printed in the array. While doing these operations, it is copied in null characters.
As a result, the two names are copied to the s3 array without overlapping. 
The name combined with the printf function is printed on the screen.

Good work and Best Regards.