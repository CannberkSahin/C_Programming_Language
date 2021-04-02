#include <stdio.h>
#include <stdlib.h>
#include "mutility.h"

//Define a generic swap function
void gswap(void *vp1, void *vp2, size_t size)
{
    char *p1 = (char *)vp1;
    char *p2 = (char *)vp2;

    while(size--){
	char temp = *p1;
	*p1++ = *p2;
 	*p2++ = temp;
    }
}

int main()
{
    int x = 1987, y = 2019;
    double d1 = 3.14159, d2 = -4.7234;
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int b[10] = {-2,-4,-6,-8,-10,-12,-14,-16,-18,-20};

    gswap(&x,&y,sizeof(int)); //call a function for int type
    //gswap(&x,&y,sizeof x); //call a function for int type
    printf("x = %d   y = %d\n", x , y);
    gswap(&d1,&d2,sizeof(double)); //call a function for double type
    printf("d1 = %f  d2 = %f\n", d1 , d2);
    gswap(a,b,sizeof a); //call a function for int type array
    display_array(a, 10);
}
