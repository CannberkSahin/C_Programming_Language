#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

//Define Macros
#define        SIZE          100

int main()
{
    char *ploc = setlocale(LC_ALL,"turkish");

    if(ploc == NULL){ //if(!ploc)
        printf("Locale could not be changed!\n");
        return 1;
    }
    printf("Locale change set...New locale: (%s)\n", ploc);

    char str[SIZE];
    time_t timer;
    time(&timer);
    struct tm *p = localtime(&timer);

    strftime(str, SIZE, "%A %B %Y", p);
    printf("%s\n",str);
}
