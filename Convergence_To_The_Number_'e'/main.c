#include <stdio.h>
#include <stdlib.h>

int factorial(int val)
{
    int result=1;

    while(val){
        result *= val;
        --val;
    }

    return result;
}

int main()
{
    double sum = 0;

    for (int i = 0; i < 13; ++i)
        sum += 1. / factorial(i); //Convergence to the e = 2.71

	printf("value of 'e' number: = %f\n", sum);
}
