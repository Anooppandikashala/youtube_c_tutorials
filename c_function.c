#include<stdio.h>

// 1. Function with no argument and no return value.

void printLine()
{
    printf("\n__________________________________\n");
}

// 2. Function with no argument but returns a value.

int random()
{
    return 10;
}

// 3. Function with argument but no return value.

void printChar(char c)
{
    for(int i=0;i<20;i++)
    {
        printf("%c",c);
    }
}


// 4. Function with argument and returns a value.

double getSum(double x, double y)
{
    return x+y;
}


void main()
{
    //sample code
    printLine();
    int rand = random();
    printf("\n%d",rand);
    printLine();
    printChar('#');
    printChar('#');
    printChar('#');
    printLine();
    double res = getSum(50.2,50);
    printf("%f",res);
    printLine();


}
