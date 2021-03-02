#include <stdio.h>
#include <stdlib.h>

/*There are more than one algorithm for writing a factorial function in C language.*/
//In the compiler used here, the int type is 4 bytes.
//Therefore, there is a risk of overflow.
//Therefore, the factorial calculation was made up to the last 13 numbers in this program.

//First method for loop
int factorial_for(int val)
{
	int result = 1;

	for (int i = 1; i <= val; ++i)
		result *= i;

	return result;
}

//Second method While Loop
int factorial_while(int val)
{
	int result = 1;

	while (val) {
		result *= val;
		--val;
	}

	return result;
}

//Third method recursive
int factorial_recursive(int val)
{
	return val < 2 ? 1 : val * factorial_recursive(val - 1);
}

//Look Up Table (LUT) Method
int factorial_lut(int val)
{
	const int a[] = {
		1,
		1,
		2,
		6,
		24,
		120,
		720,
		5040,
		40320,
		362880,
		3628800,
		39916800,
		479001600,
	};

	return a[val];
}

int main()
{
    for (int i = 0; i < 13; ++i) {
		printf("%2d! = %d\n", i, factorial_lut(i));
	}
}
