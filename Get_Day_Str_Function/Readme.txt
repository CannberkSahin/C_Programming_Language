Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

String Literals
===============
-A String Literal, also known as a string constant or constant string, is a string of 
characters enclosed in double quotes, such as "To err is human - To really foul things up 
requires a computer."
-String literals are stored in C as an array of chars, terminted by a null byte.
-*A null byte is a char having a value of exactly zero, noted as '\0'.
-*Do not confuse the null byte, '\0', with the character '0', the integer 0, 
the double 0.0, or the pointer NULL.
-String literals may contain as few as one or even zero characters.
-*Do not confuse a single-character string literal, e.g. "A" with a character constant, 
'A'. The former is actually two characters, because of the terminating null byte stored at the end.
-*An empty string, "", consists of only the null byte, and is considered to have a string 
length of zero, because the terminating null byte does not count when determining string lengths.
-String literals may contain any valid characters, including escape sequences such as \n, \t, etc. 
Octal and hexadecimal escape sequences are technically legal in string literals, but not as commonly 
used as they are in character constants, and have some potential problems of running on into following text.

Passing String Literals to Functions
====================================
String literals are passed to functions as pointers to a stored string.
For example, given the statement:
printf( "Please enter a positive value for the angle: " );
the string literal "Please enter . . . " will be stored somewhere in memory, and the address 
will be passed to printf. The first argument to printf is actually defined as a char *.
Good work and Best Regards.

Continuing a String Literal
===========================
If a string literal needs to be continued across multiple lines, there are three options:

If the new line character is included between the double quotes, then it is included as part of the string:
    printf("This will
         print over three
         lines, (and will include extra tabs or spaces. )");
Escaping the newline character with the backslash will cause it to be ignored:
    printf( "This will \
         print over a single \
         line, (but will still include extra tabs or spaces.)" );
However the best approach is to note that when two strings appear adjacent to one another, 
C will automatically concatenate them into a single string:
    printf( "This will "
         "print over a single "
         "line, (without extra tabs or spaces! )");

Operations on String Literals
=============================
Character pointers may hold the address of string literals:
char *prompt = "Please enter the next number: ";

String literals may be subscripted:

"abc" [ 2 ] results in 'c'
"abc" [ 0 ] results in 'a'
"abc" [ 3 ] results in the null byte.

Attempting to modify a string literal is undefined, and may cause problems in different 
ways depending on the compiler:
prompt[ 0 ] = 'S'; // From above. Don't do this.

A function named get_day_str is written in the program to show that string literals 
are created by the compiler as a char type array and can be used in functions returning addresses. 
The switch control statement is used in the function. The tags of the switch statement are assigned 
string literals and the return of the function is done.