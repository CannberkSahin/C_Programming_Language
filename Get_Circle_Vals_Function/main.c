#include <stdio.h>
#include <stdlib.h>

#define     PI    3.1415926

//Define get_circle_vals Function
void get_circle_vals(const double radius, double *p_area, double *p_perimeter)
{
    *p_area = PI * radius * radius;
    *p_perimeter = 2. * PI * radius;
}

int main()
{
     //Test Codes
     double r;
     double area, perimeter;

     printf("Enter a radius for circle area and perimeter:");
     scanf("%lf",&r);

     get_circle_vals(r, &area, &perimeter);
     printf("Area = %f, Perimeter = %f\n",area,perimeter);
}
