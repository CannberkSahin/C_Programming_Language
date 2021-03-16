Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

If the same string literal is repeated anywhere in the program in C language, 
will the addresses of this identical string literal be the same? 
It is wrong to say that the addresses of the two pointer variables are the same 
for this question. However, it is wrong to say that it is not the same.
This event is called unspecified behavior in C language.So addressing depends
entirely on the compiler.

Unspecified behavior
====================
Unspecified behavior is behavior that may vary on different implementations of 
a programming language. A program can be said to contain unspecified behavior 
when its source code may produce an executable that exhibits different behavior 
when compiled on a different compiler, or on the same compiler with different 
settings, or indeed in different parts of the same executable. While the respective 
language standards or specifications may impose a range of possible behaviors, 
the exact behavior depends on the implementation and may not be completely determined 
upon examination of the program's source code.

Unspecified behavior will often not manifest itself in the resulting program's external 
behavior, but it may sometimes lead to differing outputs or results, potentially causing 
portability problems.

As a result, the compiler can keep identical string literals at the same address or at 
a different address.

Good work and Best Regards.