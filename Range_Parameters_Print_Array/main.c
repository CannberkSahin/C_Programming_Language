#include <stdio.h>
#include <stdlib.h>

void print_array(const int *pf, const int *pe)
{
    while(pf != pe)
        printf("%3d ", *pf++);
    printf("\n");
}

int main()
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_array(a, a+10); //Invoke unction first and last elements of the array
}
