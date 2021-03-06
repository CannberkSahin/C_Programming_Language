/****************************************************************************************
** Company :                                                                            *
** Engineer: CANBERK �AH�N                                                              *
                                                                                        *
** Create Date: 06.03.2021                                                              *
** Design Name:                                                                         *
** Modula Name:                                                                         *
** Project Name: Create own utility implementation file                                 *
** Target Device:                                                                       *
** Tool Version: mutility.c V_0                                                         *
** Description:                                                                         *
                                                                                        *
** Dependencies:                                                                        *
                                                                                        *
** Revision:                                                                            *
** Additional Comments:                                                                 *
*****************************************************************************************/
//Define Header Files
#include "mutility.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Define Functions
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
static icmp(const void *vp1, const void *vp2)
{
	return *(const int *)vp1 - *(const int *)vp2;
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
int day_of_the_week(int d, int m, int y)
{
	// array with leading number of days values
	const int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };

	// if month is less than 3 reduce year by 1
	if (m < 3)
		y -= 1;

	return ((y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7);
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void dline(void)
{
	printf("\n-------------------------------------------------------------------------------\n");
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
int ndigit(int val)
{
	if (val == 0)
		return 1;

	int digit_count = 0;

	while (val) {
		++digit_count;
		val /= 10;
	}

	return digit_count;
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
int isprime(int val)
{
	if (val == 0 || val == 1)
		return 0;

	if (val % 2 == 0)
		return val == 2;

	if (val % 3 == 0)
		return val == 3;

	if (val % 5 == 0)
		return val == 5;

	for (int k = 7; k * k <= val; k += 2)
		if (val % k == 0)
			return 0;

	return 1;
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void sleep(double sec)
{
	clock_t start = clock();

	while ((double)(clock() - start) / CLOCKS_PER_SEC < sec)
		;//null statement
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void cls(void)
{
	system("cls");
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void randomize(void)
{
	srand((unsigned int)time(0));
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void set_random_array(int *p, size_t size)
{
	for (size_t i = 0; i < size; ++i)
		p[i] = rand() % 1000;
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void display_array(const int *p, size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		if (i && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
	dline();
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void display_array_double(const double *p, size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		if (i && i % 50 == 0)
			printf("\n");
		printf("%.2f ", p[i]);
	}
	dline();
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void sort(int *p, int size)
{
	qsort(p, size, sizeof(*p), &icmp);
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
void swap(int *first_num, int *second_num)
{
	int temp = *first_num;
	*first_num = *second_num;
	*second_num = temp;
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------
int power(int base, int exp)
{
	int result = 1;

	while (exp--) {
		result *= base;
	}

	return result;
}
//----------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------


