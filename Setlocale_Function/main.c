#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *ploc = setlocale(LC_ALL,"turkish");

    if(ploc == NULL){ //if(!ploc)
        printf("Locale could not be changed!\n");
        return 1;
    }
    printf("Locale change set...New locale: (%s)\n", ploc);

    double dval;
    printf("Enter a decimals number:");
    scanf("%lf",&dval);

    printf("dval = %f\n",dval);
}
