Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

String Manipulation (Tasks)
===========================
In this program, various operations are required to be performed on string literals. 
These operations were performed as tasks, respectively.
[1] Copy the text in the array named old_file_name to the array named new_file_name
[2] If the file name in the new_file_name array does not have an extension, make the extension .jpg
[3] If the extension of the file name in the new_file_name array is .txt, make the extension .xls
[4] If the extension of the filename in the new_file_name array is .dat, delete the extension.
[5] If the extension of the file name in the new_file_name array is out of the above cases, 
make the file extension as .docs
====================================================================================================

The first task is done with the strcpy function. The target address is written for the first 
parameter of the function, and the source address is written for the second parameter.
strcpy(new_file_name,old_file_name);

In order to do the second task, the following must be done; To find out if the extension exists 
and to locate it, you need to search for the period (.) character. Because it is the period character 
that separates the root part and the extension part of the file.However, in many operating systems, 
there may also be a period (.) Character in the name of the file.Therefore, the period character must be 
searched at the end of the name.The srtrchr function is used to find the period character at the end of 
the file. For this char, a pointer variable is defined.This pointer variable is assigned the return 
value of the strrchr function. p = strrchr(new_file_name, '.');
If the file has no extension, the file extension will be .jpg.The strcat function is used for this. 
Because adding at the end of the article is done with this function. strcat(new_file_name, ".jpg");

In order to do the third task, the following must be done; How do we know if the file extension is .txt?
We can find the answer by comparison, that is, with the strcmp function. Since the variable p is the address 
of the dot character, the text at the p address must be .txt. If there is no extension, .txt text is copied 
to the place where p is located. We did this with the function named strcpy. 

In order to do the fourth task, the following must be done; If the file extension is .dot, delete the extension.
The period character's location is used to delete the extension. The period character is replaced by a null 
character.To do this, strcmp function is used as we did in the 3rd method. *p = '\0';

In order to do the fifth task, the following must be done; If the extension of the file is not one of the above, 
the extension of the file will be .docs. For this, strcpy function must be called inside the else statement.
strcpy(p, ".docs");

Program Test
============
[2] If the file name in the new_file_name array does not have an extension, make the extension .jpg
----------------------------------------------------------------------------------------------------
Enter File Name:can
(can) => (can.jpg)
----------------------------------------------------------------------------------------------------
[3] If the extension of the file name in the new_file_name array is .txt, make the extension .xls
----------------------------------------------------------------------------------------------------
Enter File Name:can.txt
(can.txt) => (can.xls)
----------------------------------------------------------------------------------------------------
[4] If the extension of the filename in the new_file_name array is .dat, delete the extension.
----------------------------------------------------------------------------------------------------
Enter File Name:can.dat
(can.dat) => (can)
----------------------------------------------------------------------------------------------------
[5] If the extension of the file name in the new_file_name array is out of the above cases, make the 
file extension as .docs
----------------------------------------------------------------------------------------------------
Enter File Name:can.gif
(can.gif) => (can.docs)
----------------------------------------------------------------------------------------------------

Good work and Best Regards.