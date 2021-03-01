#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Printing both the amount occupied by the objects in the memory
    and the amount occupied by the object addresses in the memory.
    */
    printf("sizeof(char)             = %zu\n",sizeof(char));
    printf("sizeof(char*)            = %zu\n",sizeof(char*));
    printf("----------------------------\n");
    printf("sizeof(short)            = %zu\n",sizeof(short));
    printf("sizeof(short*)           = %zu\n",sizeof(short*));
    printf("----------------------------\n");
    printf("sizeof(int)              = %zu\n",sizeof(int));
    printf("sizeof(int*)             = %zu\n",sizeof(int*));
    printf("----------------------------\n");
    printf("sizeof(long int)         = %zu\n",sizeof(long int));
    printf("sizeof(long int*)        = %zu\n",sizeof(long int*));
    printf("----------------------------\n");
    printf("sizeof(double)           = %zu\n",sizeof(double));
    printf("sizeof(double*)          = %zu\n",sizeof(double*));
    printf("----------------------------\n");
    printf("sizeof(float)            = %zu\n",sizeof(float));
    printf("sizeof(float*)           = %zu\n",sizeof(float*));
    printf("----------------------------\n");
    printf("sizeof(long double)      = %zu\n",sizeof(long double));
    printf("sizeof(long double*)     = %zu\n",sizeof(long double*));
}
