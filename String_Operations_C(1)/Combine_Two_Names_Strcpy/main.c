#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Define Macros
#define     SIZE     100

int main()
{
    char s1[SIZE];
    char s2[SIZE];
    char s3[SIZE];

    printf("Enter a Two Names:");
    scanf("%s%s",s1,s2);
    strcpy(s3, s1);  //Name1 copy to s3 array(First name)
    strcpy(s3 + strlen(s3),s2); //Name2 copy to s3(Last Name)
    //Alternative way
    /*strcpy(strcpy(s3, s1) + strlen(s1), s2); */

    printf("(%s) + (%s) = (%s)\n",s1,s2,s3);
}
