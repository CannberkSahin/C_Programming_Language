#include <stdio.h>
#include <stdlib.h>

/*Create The function that finds the median of 3 numbers*/
int get_mid(int a, int b, int c)
{
	// if a is not median (if a is max or if a min then a is not median)
	if (!(a > b&&a > c || a < b&&a < c)) {
		return a;
	}

	if (!(b > a&&b > c || b < a&&b < c)) {
		return b;
	}

	return c;
}

int main()
{
	int x, y, z;
	printf("Enter three integer numbers :");
	scanf("%d%d%d", &x, &y, &z);

	printf("%d %d ve %d Median of the numbers %d\n", x, y, z, get_mid(x, y, z));
	return 0;
}

