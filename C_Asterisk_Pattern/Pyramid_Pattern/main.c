#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int i, j, n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        //Ending line after each row
        printf("\n");
    }
}
