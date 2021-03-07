#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter an input value:");
    int i, j, n;
    scanf("%d", &n);
    // solid rhombus
    printf("Solid Rhombus\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n - i; j++){
            printf(" ");  // leading spaces
        }
    for(j = 0; j < n; j++){
        printf("*");
        }
        printf("\n");
    }
    // hollow rhombus
    printf("Hollow Rhombus\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < n - i; j++){
            printf(" ");  // leading spaces
        }
    for(j = 0; j < n; j++){
    // upper horizontal, bottom horizontal, left diagonal, right diagonal
        if(i == 0 || i == n - 1 || j == 0 || j == n - 1)
            printf("*");
        else
            printf(" ");
        }
        printf("\n");
    }
}
