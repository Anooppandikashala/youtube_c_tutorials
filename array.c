#include<stdio.h>
//to find the toper of the class
void main()
{
    int mark[10]= {50, 60 ,89 ,68, 78, 59, 46 ,45 ,43, 58};
    // printf("Enter the 10 marks :");
    // for(int i=0;i<10;i++)
    // {
    //     scanf("%d",&mark[i]);
    // }
    for(int i=0;i<10;i++)
    {
        printf("%d ",mark[i]);
    }
    // printf("Enter the Searching element :");

    // int searchElement;
    // scanf("%d",&searchElement);

    // int isValuePresent=0;
    // for(int i=0;i<10;i++)
    // {
    //     if(mark[i] == searchElement)
    //     {
    //         isValuePresent = 1;
    //         printf("Search element found ");
    //         break;
    //     }
    // }
    // if(isValuePresent==0)
    // {
    //     printf("Search element not found ");
    // }

    //sorting

    for(int i=0;i<10;i++)
    {
        for(int j=0;j< 10-i-1;j++)
        {
            if(mark[j] > mark[j+1])
            {
                int temp = mark[j];
                mark[j] = mark[j+1];
                mark[j+1]  =  temp;
            }
        }
    }
    printf("\n ");
    for(int i=0;i<10;i++)
    {
        printf("%d ",mark[i]);
    }
    printf("\nToper's mark : %d",mark[9]);

}
