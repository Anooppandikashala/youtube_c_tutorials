#include<stdio.h>

void printArithmetic()
{
  int *x;
  int *y;

  int num1=10,num2=20;

  x=&num1;
  y=&num2;

  int res1 = *x + *y ;
  int res2 = *x - *y ;
  int res3 = *x * *y ;
  int res4 = *x / *y ;

  printf("%d\n",res1);
  printf("%d\n",res2);
  printf("%d\n",res3);
  printf("%d\n",res4);

}

void intArray()
{
  int array[5]={1,2,3,4,5};

   int *arrayPtr;

   arrayPtr = array;

   for(int i=0 ; i<5 ; i++)
   {
     printf("%d\n",*arrayPtr);
     arrayPtr++;
   }
}

void charPointerArray()
{
  //char array

    char name[10] = "ANOOP";

    char *ptr = name;

    printf("%s",ptr); 

    char *ptr1 = "ANOOP";

     printf("\n%s",ptr1); 

}


void Sum(int *x , int *y)
{
  printf("Sum : %d",*x + *y);
}

int* larget(int *x , int*y)
{
  if(*x > *y)
    return x;
  else
    return y;  
}

void main()
{
  int num1 = 10;
  int num2 = 20;

  Sum( &num1, &num2) ;
  
  int * large = larget( &num1, &num2);

  printf("\nLarge :%d",*large);

}