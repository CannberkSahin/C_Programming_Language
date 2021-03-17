#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define    asize(x)      (sizeof(x) / sizeof(x[0]))

void randomize(void)
{
    srand((unsigned int)time(NULL));
}

int main()
{
    //Look-up table
    const char *const pmons[] = {
    "", //null string literal
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

    int n;
    printf("\nEnter a number between 1 and 12:");
    scanf("%d",&n);

    printf("%d month of the year is %s\n",n, pmons[n]);

    printf("Press the enter key:\n");
    randomize();

    while(1){
        printf("%s ",pmons[rand() % asize(pmons)]);
        getchar();
    }
}
