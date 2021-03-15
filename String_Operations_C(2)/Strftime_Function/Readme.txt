Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

strftime: Defined in header <time.h>
====================================
size_t strftime(char *str, size_t count,const char *format, const struct tm *time );

Converts the date and time information from a given calendar time time to a null-terminated 
multibyte character string str according to format string format. Up to count bytes are written.

Parameters
==========
str	- pointer to the first element of the char array for output
count	- maximum number of bytes to write
format	- pointer to a null-terminated multibyte character string specifying the format of conversion.
The format string consists of zero or more conversion specifiers and ordinary characters (except %). 
All ordinary characters, including the terminating null character, are copied to the output string 
without modification. Each conversion specification begins with % character, optionally followed 
by E or O modifier (ignored if unsupported by the locale), followed by the character that determines 
the behavior of the specifier. The following format specifiers are available:

Conversion specifier  |	 Explanation	                  |   Used fields
==========================================================================================================
%	                 writes literal %.                    The full conversion specification must be %%.	
n                      	 writes newline character	
t                        writes horizontal tab character
==========================================================================================================
time	- pointer to a struct tm object specifying the time to format

Return value
============
The number of bytes written into the character array pointed to by str not including the terminating 
'\0' on success. If count was reached before the entire string could be stored, ​0​ is returned and the 
contents are undefined.

Example
=======
#include <stdio.h>
#include <time.h>
#include <locale.h>
 
int main(void)
{
    char buff[70];
    struct tm my_time = { .tm_year=112, // = year 2012
                          .tm_mon=9,    // = 10th month
                          .tm_mday=9,   // = 9th day
                          .tm_hour=8,   // = 8 hours
                          .tm_min=10,   // = 10 minutes
                          .tm_sec=20    // = 20 secs
    };
 
    if (strftime(buff, sizeof buff, "%A %c", &my_time)) {
        puts(buff);
    } else {
        puts("strftime failed");
    }
 
    setlocale(LC_TIME, "el_GR.utf8");
 
    if (strftime(buff, sizeof buff, "%A %c", &my_time)) {
        puts(buff);
    } else {
        puts("strftime failed");
    }
}
Output:
Sunday Sun Oct  9 08:10:20 2012
Κυριακή Κυρ 09 Οκτ 2012 08:10:20 πμ EST

In the program, the locale is made in Turkish with the setlocale function, 
and the date in the current time is printed on the screen with the strftime function.

Good work and Best Regards.