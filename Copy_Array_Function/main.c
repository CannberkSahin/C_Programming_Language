#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Defines Macros*/
#define    SIZE    100

void randomize(void)
{
    srand((unsigned int)time(0));
}

void set_random_array(int *p, size_t size)
{
    for(int i = 0; i < size; ++i){
        p[i] = rand() % 1000;
    }
}

void display_array(const int *p, size_t size)
{
    for(int i = 0; i < size; ++i){
        if(i && i % 20 == 0)
            printf("\n");
        printf("%3d ", p[i]);
    }
    printf("\n-------------------------------------------------------------------------------\n");
}

//First Method
void copy_array(int *pdest, const int *psource, int n)
{
    for(int i = 0; i < n; ++i)
	pdest[i] = psource[i];
}

//Second Method )Idiom
void copy_array_idiom(int *pdest, const int *psource, int n)
{
    while(n--)
        *pdest++ = *psource++;
        //++pdest;
        //++psource;
}

int main()
{
    int a[SIZE];
    int b[SIZE];

    randomize();
    set_random_array(a, SIZE);
    printf("Array a:\n");
    display_array(a, SIZE);

    //We want to copy a array from b array
    copy_array(b, a, SIZE);
    printf("Array b:\n");
    display_array(b, SIZE);
}
