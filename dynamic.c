#include<stdio.h>
#include<stdlib.h>

void main()
{
    int x =10;
    printf("\n%d",x);

    int *ptr = (int*)malloc(sizeof(int));

    *ptr = 100;

    printf("\n%d",*ptr);

    free(ptr);

    printf("\n%d",*ptr);
}