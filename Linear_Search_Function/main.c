#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mutility.h"

//Define Macros
#define      SIZE     100

//Linear Search Function First Way
int *search_in_array(const int *p, size_t size, int key)
{
    for(size_t i=0; i<size; ++i){
        if(p[i]==key)
            return (int *)(p + i); //const cast
    }

    return NULL; //NULL Pointer
}

//Linear Search Function Second Way
int *linear_search_in_array(const int *p, size_t size, int key)
{
    while(size--){
        if(*p == key)
            return (int *)p;

        ++p;
    }
    return NULL;
}

int main()
{
    int a[SIZE];
    int sval;
    int *p;

    randomize();
    set_random_array(a, SIZE);
    display_array(a, SIZE);
    printf("Enter the value to search in the array:");
    scanf("%d",&sval);

    if((p = linear_search_in_array(a, SIZE, sval)) != NULL){/*assignment idiom*/
        printf("The searched array element was found.\n");
        printf("Searched element value = %d, Searched element index = %d\n",*p, p-a);
    }
    else{
         printf("The searched array element was not found.\n");
    }
}
