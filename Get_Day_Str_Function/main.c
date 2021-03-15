#include <stdio.h>
#include <stdlib.h>

char *get_day_str(int dayno)
{
    switch(dayno){
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return"Thursday";
        case 5: return "Friday";
        case 6: return"Saturday";
        case 7: return "Sunday";
    }
    return "";
}

int main()
{
    for(int i=1; i<=7; ++i){
        puts(get_day_str(i));
    }
}
