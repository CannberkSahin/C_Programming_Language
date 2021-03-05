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


int sum_array(const int *p, size_t size)
{
    int sum = 0;

    for(int i = 0; i < size; ++i){
        sum += p[i];
    }

    return sum;
}

double get_mean_array(const int *p, size_t size)
{
    return (double)sum_array(p, size) / size;
}

double get_std_dev(const int *p, size_t size)
{
    double mean = get_mean_array(p, size);
    double sum = 0.;

    for(int i = 0; i < size; ++i)
        sum += (p[i] - mean) * (p[i] - mean);

    return sqrt(sum / size);
}

int main()
{
    int a[SIZE];

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    printf("\n\nSum of the array elements = %d\n", sum_array(a, SIZE));
    printf("\nMean of the array = %f\n",get_mean_array(a,SIZE));
    printf("\nStandard Deviation of the array = %f\n",get_std_dev(a,SIZE));
}
