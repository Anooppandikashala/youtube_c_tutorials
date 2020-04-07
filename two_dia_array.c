#include<stdio.h>

void main()
{
    int matrix1[3][4]={10,20,30,40,50,60,70,80,90,100,110,120};

    int matrix2[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    // for(int row=0;row<3;row++)
    // {
    //     for(int col=0;col<4;col++)
    //     {
    //         printf("\nenter the %d, %d element :",row,col);
    //         scanf("%d",&matrix2[row][col]);
    //     }
    // }

    printf("\n First matrix : \n");
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            printf("%d\t",matrix1[row][col]);
        }
        printf("\n");
    }

    printf("\n second matrix : \n");
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            printf("%d\t",matrix2[row][col]);
        }
        printf("\n");
    }


    //addition

    int result[3][4];

    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            result[row][col]= matrix1[row][col] + matrix2[row][col];
        }
        
    }

    printf("\n Result matrix : \n");
    for(int row=0;row<3;row++)
    {
        for(int col=0;col<4;col++)
        {
            printf("%d\t",result[row][col]);
        }
        printf("\n");
    }



}