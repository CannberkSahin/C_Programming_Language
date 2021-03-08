#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int *p1 = a; //First element of array
    int *p2 = a + 10; //Last element of array

    while(p1 != p2){ //The address of the first element is not equal to the address of the last element.
        printf("%d ",*p1++);
    }
    printf("\n");
}
