#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define    SIZE    100

void randomize(void)
{
    //Set seed value while real time
    srand((unsigned int)time(0));
}

//First Method
void set_random_array(int *ptr, size_t size)
{
    for(int i = 0; i < size; ++i){
        ptr[i] = rand() % 1000;
    }
}

//Second Method
void set_random_array_while(int *ptr, size_t size)
{
    while(size--){
        *ptr = rand() % 1000;
        ++ptr;
    }
}

//Third Method (idiom)
void set_random_array_idiom(int *ptr, size_t size)
{
    while(size--)
        *ptr++ = rand() % 1000;
}

//The function showing the elements of the array on the screen
//Access Function
void display_array(const int *p, size_t size)
{
    while(size--){
        printf("%3d ", *p++);
        //++p;
    }
}
int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
}
