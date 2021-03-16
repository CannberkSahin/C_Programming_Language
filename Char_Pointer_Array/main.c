#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Look-up table
    char *pmons[] = {
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
    };

    for(int i=0; i< 12; ++i)
        puts(pmons[i]); //Puts gives the new line character to the standard output stream
}
