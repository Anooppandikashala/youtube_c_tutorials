#include<stdio.h>

void main()
{
   int x;
   x =50;

   printf("\nAddress of x : %p",&x);
   printf("\nValue of x : %d",x);

  int *ptr;
  ptr = &x;

  printf("\nValue of ptr : %p",ptr);

  printf("\nValue of *ptr : %d",*ptr);

  *ptr = 99;

  printf("\nAddress of x : %p",&x);
  printf("\nValue of x : %d",x);

  printf("\nValue of ptr : %p",ptr);

  printf("\nValue of *ptr : %d",*ptr);




}