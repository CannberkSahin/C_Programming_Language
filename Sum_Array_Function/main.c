#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
}

//First Method
int sum_array(const int *p, size_t size)
{
    int sum = 0;

    for(int i = 0; i < size; ++i){
        sum += p[i];
    }

    return sum;
}

//Second Method
int sum_array_while(const int *p, size_t size)
{
    int sum = 0;

    while(size--)
        sum += *p++;

    return sum;
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    printf("\nSum of the array elements = %d\n", sum_array(a, SIZE));
}
