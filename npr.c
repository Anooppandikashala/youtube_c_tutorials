#include<stdio.h>
/*
npr = n! / (n-r)!
3! = 3*2*1 = 6
5! = 5*4*3*2*1 =120
5p2 = 120/6 = 20

0! = 1
1! = 1
*/

int factorial(int n)
{
  if(n==0 || n==1 )
  {
    return 1;
  }
  int fact=1;
  for(int i=n;i>1;i--)
  {
    fact = fact*i;
  }
  return fact;
}


void main()
{
  int n=0,r=0;
  printf("\nEnter n :");
  scanf("%d",&n);
  printf("\nEnter r :");
  scanf("%d",&r);
  printf("\n-----nPr-----");

  int n_fact = factorial(n);

  int n_r_fact = factorial(n-r);

  int val = n_fact / n_r_fact;

  printf("\n Npr Value %d: ",val);

}
