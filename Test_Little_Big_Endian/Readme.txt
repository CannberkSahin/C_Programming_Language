Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

An interview question problem is solved in this program. The question is, write a C code and print on 
the screen whether the system is little endian or big endian? An x variable of type int has been defined. 
1 is assigned to this value of x. If the system is little endian, if we convert the address of variable 
x to char * and access the object at this address, the value of this char object should be 1.As a result, 
if it enters the correct part of the if statement, little endian is written on the screen, and if it enters 
the wrong part, big endian is written on the screen. Operators in the expression if (*(char *)&x) have 
a right-to-left priority direction (right associative). In other words, the process reaches the first byte 
from 4 bytes. 

int x = 1; The address and byte byte values of variable x in the expression are shown below:

type of int
==================
|---------| Adress
|0000 0000| 4001
|---------|
|0000 0000| 4002
|---------|
|0000 0000| 4003 
|---------|

Since the variable x is of type int, it has 4 bytes. The first byte has a value of 1 and the 
other bytes have a value of 0. We need to access the first byte to understand whether it is 
little endian or big endian. Therefore, the first byte can be accessed if the int type is 
converted to char * and dereference.

type of char 
==================
|---------| Adress
|0000 0001| 4000 
|---------|

If it is little endian, the value of this byte will be 1. If big endian, the value of this 
byte will be 0.

Good work and Best Regards.