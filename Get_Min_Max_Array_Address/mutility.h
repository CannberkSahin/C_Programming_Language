/****************************************************************************************
** Company :                                                                            *
** Engineer: CANBERK SAHIN                                                              *
                                                                                        *
** Create Date: 06.03.2021                                                              *
** Design Name:                                                                         *
** Modula Name:                                                                         *
** Project Name: Create own utility header                                              *
** Target Device:                                                                       *
** Tool Version: mutility.h V_0                                                         *
** Description:                                                                         *
                                                                                        *
** Dependencies:                                                                        *
                                                                                        *
** Revision:                                                                            *
** Additional Comments:                                                                 *
*****************************************************************************************/

/*Multiple Inclusion Guard*/
#ifndef MUTILITY_H
#define MUTILITY_H

#include <stddef.h>

#define    asize(x)		 (sizeof(x) / sizeof(x[0]))
#define    isleap(y)	 ((y) % 4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0))

int power(int base, int exp);
void dline(void);
int isprime(int);
int ndigit(int);
void sleep(double sec);
int day_of_the_week(int d, int m, int y); //0 Sunday
void cls(void);
void randomize(void);
void set_random_array(int *p, size_t size);
void display_array(const int *p, size_t size);
void sort(int *p, int size);
void swap(int *first_num, int *second_num);

#endif

