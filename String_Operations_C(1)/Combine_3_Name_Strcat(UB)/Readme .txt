Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

Strcat, a standard function of the C language, is a frequently used function.
Care must be taken when using this function. Because the standards of the C 
language do not guarantee the security measures of this function.
Security means overflow the array or doing any undefined behavior.
An example of undefined behavior done with the strcat function is given in this program.
Arrays of 4 different char types are defined. names were assigned to s1, s2 and s3. 
The purpose is to assign these names to the array named sr sequentially. In other words, 
combining these three names on the screen and printing canBerkSource. For this, strcat 
function has been called 3 times. The expectation is to write canBerkSource to the screen. 
However, undefined behavior has occurred here.The reason for this behavior is undefined, 
because the str array is automatic storage and full of garbage values.
Before doing this operation, str [0] = '\0' must be done.

Good work and Best Regards.