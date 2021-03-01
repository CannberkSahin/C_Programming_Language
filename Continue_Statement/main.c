#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;

    while(i < 20){
        printf("%d ",i);
        ++i;
        if(i % 3 == 0){
            printf("(-->)");
            continue;
        }
        printf("*");
		printf("-");
		printf(".");
    }
}
