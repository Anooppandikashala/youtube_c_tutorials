#include<stdio.h>

//nesting of functions

//recursion
// 4 factorial 4 * 3 * 2 * 1 
// fact 1 = 1;
// fact 0 = 1;
// fact(n)= n* fact(n-1)
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int fact = n*factorial(n-1);
    return (fact);
    
}


void main()
{
    //sample code

    printf("\nIn Main");

    int ans = factorial(4);
    printf("\nFactorial : %d",ans);    
    
}
