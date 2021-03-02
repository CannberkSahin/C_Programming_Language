#include <stdio.h>
#include <stdlib.h>

//Use pointer method
void get_circle_area_pointer(double r, double *p_area)
{
    *p_area = 3.1415926 * r * r;
}

//Return method
double get_circle_area(double r)
{
    return 3.1415926 * r * r;
}

int main()
{
    double radius;
    double p_area;
    printf("Enter a radius:");
    scanf("%lf",&radius);

    //Return method
    printf("Area of the circle = %f\n",get_circle_area(radius));

    //Pointer method
    get_circle_area_pointer(radius,&p_area);
    printf("Area of the circle = %f\n",p_area);
}
