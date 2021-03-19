#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    //Look-up table
    const char *const pmons[] = {
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

    char entry[40];

    printf("Enter a month name:");
    scanf("%s", entry);

    int i;

   /*
    for(i = 0; i < 12; ++i){
        if(!strcmp(pmons[i],entry))
            break;
    }
    */

    //Above code written as idiom
    for(i = 0; i < 12 && strcmp(pmons[i],entry); ++i)
        ; //Null statement

    if(12 == i)
        printf("%s is not a valid month name!\n");
    else
        printf("%s is the %d. month of the year.",entry,i + 1);
}
