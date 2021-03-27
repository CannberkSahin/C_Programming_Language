#include <stdio.h>
#include <stdlib.h>

//Printed array elements on the screen
void display_array(const int *p, size_t size)
{
	for (size_t i = 0; i < size; ++i) {
		if (i && i % 20 == 0)
			printf("\n");
		printf("%3d ", p[i]);
	}
}

int main()
{
    //What will be the output of the program below?
    char **ptr = NULL;

    printf("sizeof(p) = %zu\n",sizeof(ptr));      //4 byte
    printf("sizeof(*p) = %zu\n",sizeof(*ptr));    //4 byte
    printf("sizeof(**p) = %zu\n",sizeof(**ptr));  //1 byte

    printf("\n");
    //What will be the output of the program below?
    int a[5] = {0, 10, 20, 30, 40};
    int *p = a;
    int **pa = &p;

    ++*pa;
    ++**pa;

    display_array(a, 5);  //0 11 20 30 40
}
