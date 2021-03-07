#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    printf("Enter an input value:");
    scanf("%d", &n);
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  // upper left triangle
                printf("*");
            else
                printf(" ");
            if(i >= (2 * n - 1) - j) // upper right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1) // bottom left triangle
                printf("*");
            else
                printf(" ");
            if((i + n) <= j) // bottom right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
