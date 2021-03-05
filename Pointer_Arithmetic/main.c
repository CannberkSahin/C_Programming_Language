#include <stdio.h>
#include <stdlib.h>

/* Pointer Arithmetic
       &a[n]     a + n
       &n[a]     n + a
       a[n]      *(a + n)
       n[a]      *(n + a)
*/

int main()
{
    int a[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int *ptr = a;

    for(int i = 0; i < 10; ++i){
         printf("%d %d %d %d %d\n",a[i], i[a], *(a + i), *(i + a), *ptr);
         ++ptr;
    }
}
