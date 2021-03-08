#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mutility.h"

char *get_random_day(void)
{
    static char str[100];

    switch(rand()%7){
    case 0: strcpy(str, "Monday"); break;
    case 1: strcpy(str, "Tuesday"); break;
    case 2: strcpy(str, "Wednesday"); break;
    case 3: strcpy(str, "Thursday"); break;
    case 4: strcpy(str, "Friday"); break;
    case 5: strcpy(str, "Saturday"); break;
    case 6: strcpy(str, "Sundays"); break;
    }

    return str;
}

int main()
{
    char *p1, *p2, *p3, *p4;
    randomize();

    p1 = get_random_day();
    p2 = get_random_day();
    p3 = get_random_day();
    p4 = get_random_day();

    printf("%s %s %s %s\n",p1, p2, p3, p4);
}
