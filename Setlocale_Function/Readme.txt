Canberk ŞAHİN
E-Mail: canberk_cas@hotmail.com

C codes are written in the CodeBlocks development environment.
The object code file was created by compiling the C code. 
It has also been tested whether it works or not. It works without any problems.
Standard C libraries are used.These are stdio.h and stdlib.h
If you want to run the program, you can find the .exe extension in the bin folder.

Locale (computer software)
==========================
In computing, a locale is a set of parameters that defines the user's language, 
region and any special variant preferences that the user wants to see in their 
user interface. Usually a locale identifier consists of at least a language code 
and a country/region code.On POSIX platforms such as Unix, Linux and others, 
locale identifiers are defined by ISO/IEC 15897, which is similar to the BCP 47 
definition of language tags, but the locale variant modifier is defined differently, 
and the character set is included as a part of the identifier. 

General locale settings
=======================
These settings usually include the following display (output) format settings:
-Number format setting
-Character classification, case conversion settings
-Date-time format setting
-String collation setting
-Currency format setting
-Paper size setting
-Color setting

The locale settings are about formatting output given a locale. So, the time zone 
information and daylight saving time are not usually part of the locale settings. 
Less usual is the input format setting, which is mostly defined on a per application basis.

setlocale: Defined in header <locale.h>
=======================================
char* setlocale(int category, const char* locale);

The setlocale function installs the specified system locale or its portion as the new C locale. 
The modifications remain in effect and influences the execution of all locale-sensitive C library 
functions until the next call to setlocale. If locale is a null pointer, setlocale queries the 
current C locale without modifying it.

Parameters
==========
category - locale category identifier, one of the LC_xxx macros. May be null.
locale	 - system-specific locale identifier. Can be "" for the user-preferred 
locale or "C" for the minimal locale

Return value
============
pointer to a narrow null-terminated string identifying the C locale after applying the changes, 
if any, or null pointer on failure.
A copy of the returned string along with the category used in this call to setlocale may be used 
later in the program to restore the locale back to the state at the end of this call.

Notes
=====
During program startup, the equivalent of setlocale(LC_ALL, "C"); is executed before any user code is run.
Although the return type is char*, modifying the pointed-to characters is undefined behavior.
Because setlocale modifies global state which affects execution of locale-dependent functions, 
it is undefined behavior to call it from one thread, while another thread is executing any of the 
following functions: fprintf, isprint, iswdigit, localeconv, tolower, fscanf, ispunct, iswgraph, mblen, 
toupper, isalnum, isspace, iswlower, mbstowcs, towlower, isalpha, isupper, iswprint, mbtowc, towupper, 
isblank, iswalnum, iswpunct, setlocale, wcscoll, iscntrl, iswalpha, iswspace, strcoll, wcstod, isdigit, 
iswblank, iswupper, strerror, wcstombs, isgraph, iswcntrl, iswxdigit, strtod, wcsxfrm, islower, iswctype, 
isxdigit.
POSIX also defines a locale named "POSIX", which is always accessible and is exactly equivalent to the 
default minimal "C" locale.
POSIX also specifies that the returned pointer, not just the contents of the pointed-to string, 
may be invalidated by subsequent calls to setlocale.

Example
-------
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <wchar.h>
 
int main(void)
{
    // the C locale will be UTF-8 enabled English;
    // decimal dot will be German
    // date and time formatting will be Japanese
    setlocale(LC_ALL, "en_US.UTF-8");
    setlocale(LC_NUMERIC, "de_DE.utf8");
    setlocale(LC_TIME, "ja_JP.utf8");
 
    wchar_t str[100];
    time_t t = time(NULL);
    wcsftime(str, 100, L"%A %c", localtime(&t));
    wprintf(L"Number: %.2f\nDate: %Ls\n", 3.14, str);
}
Output:
Number: 3,14
Date: 月曜日 2017年09月25日 13時00分15秒

With the setlocale function in the program, the new locale of the system is set to Turkish.
The normal locale of the C language is English. Decimal numbers are used in American standards. 
Therefore, in the C language in default settings, double dval = 2.34; When a variable such 
as is defined, the dotted part is separated by a period (.).However, decimal numbers in 
Turkish are separated by commas.

Setlocale (LC_ALL, "turkish") in the program; With the command, the locale is set to Turkish.
If the setlocale function is successful, it returns the string in the address where the locale 
is defined. If it fails, it returns a Null pointer. Therefore, the return address value of 
the setlocale function is kept in a pointer variable. Later, by testing whether this value is a 
Null pointer or not, it is learned whether the locale has changed or not.Finally, a variable of 
type double was defined in the program and the decimal number entered by the user was printed 
on the screen with a comma(,).

Good work and Best Regards.