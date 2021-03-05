#include <stdio.h>
#include <stdlib.h>

//Traverse to the elements of the array with pointer methods.
int main()
{
    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *ptr = a; //initialize first element of the array value ptr pointer

    for (int i = 0; i < 10; ++i){
        printf("%d  %d\n", a[i], ptr[i]);
    }
}
