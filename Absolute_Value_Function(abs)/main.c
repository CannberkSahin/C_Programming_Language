#include <stdio.h>
#include <stdlib.h>

/*First Way if statement*/
//Create Absolute Value Function
//if number is positive return plus value else return minus value
int abs(int val)
{
    if(val > 0)
        return val;

    return -val;
}

/*Second Way Ternary Operator*/
//Create Absolute Value Function
int ternary_abs(int val)
{
    return val > 0 ? val : -val;
}

int main()
{
    int ival;

	printf("Enter a number: ");
	scanf("%d", &ival);

	printf("Absolute value of the %d is : %d\n", ival, abs(ival));
    return 0;
}
