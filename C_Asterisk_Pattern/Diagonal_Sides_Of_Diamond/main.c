#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter an input value:");
    int i, j, n;
    scanf("%d", &n);  // �n� must be odd
    int num1 = n / 2 * 3;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
    // center horizontal, center vertical, upper left diagonal, bottom left diagonal, upper right diagonal, bottom right diagonal
        if(i == n / 2 || j == n / 2 || i + j == n / 2 || i - j == n / 2 || j - i == n / 2 || i + j == num1)
            printf("*");
        else
            printf(" ");
        }
        printf("\n");
    }
}
