Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

A function named is_at_end was written in the program. The return value of the function is boolean int.
The function has two parameter values. These parameters require the addresses of two texts.
If there is a text sent to the second parameter at the end of the text sent to the first parameter of 
the function, the function returns true. The name of the function comes from this event. 
Is there this string at the end of this string? If there is no text entered at the end of the text, 
the function returns false.For example, if the user sends the text (Ankara) to the first parameter, 
if who sends the (kara) text to the second parameter, the function will return true because it is 
(kara) at the end of Ankara.

Test code of the program was written first. If the first string is shorter than the second string, 
there is no negligence to be the second string at the end of the first string.For example, at the 
end of the text cat text cannot be the word chocolate.Therefore, if the first string is shorter 
than the second string, false is returned directly. Otherwise we have to do this; If the last n characters 
of the first text and the second text are equal, the function returns true. To do this, write the 
following code: strcmp(p1 + len1 - len2, p2); If this statement is true, the two strings are equal, 
otherwise the two strings are not equal. An idiom is used in the return statement in my profile. 
This idiom return !strcmp(p1 + len1 - len2, p2); dir.

The strcmp function returns 0 if the two texts are equal, but our function is a test function, 
notice that there "is" an is statement at the beginning of the function name. Therefore, 
if our function is correct, it must return a positive number, in which the strcmp function is not logical.

Good work and Best Regards.