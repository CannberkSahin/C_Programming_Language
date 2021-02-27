#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*The reason to start at 100 is to print out the 3-digit Armstrong numbers.*/
    int val = 100;

	for (int i = 1; i < 10; ++i) {//Hundreds digit
		for (int j = 0; j < 10; ++j) {//Tens digit
			for (int k = 0; k < 10; ++k) {//ones digit
				if (i * i * i + j * j * j + k * k * k == val) //Check whether Armstrong is a number
					printf("The number %d is an Armstrong number.\n", val);
				++val;
			}
		}
	}
}
