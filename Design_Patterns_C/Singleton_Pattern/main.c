#include <stdio.h>
#include <stdlib.h>

//smarter macro
#define SINGLETON(t, inst, init) t* Singleton_##t() { \
                 static t inst = init;               \
                 return &inst;                       \
                }

/* actual definition */
SINGLETON(float, finst, 5.8);

int main()
{
    printf("%.3f\n", *(Singleton_float()));
    return 0;
}
