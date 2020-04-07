#include<stdio.h>

struct Student
{
    int id;
    char name[50];
    int mark[3];
};


void main()
{
    struct Student s[3];

    for(int j=0;j<3;j++)
    {
        printf("Enter the student %d id :",j+1);
        scanf("%d",&s[j].id);

        printf("Enter student %d name : ",j+1);
        scanf("%s",s[j].name);        

        for(int i=0 ; i<3; i++)
        {
            printf("Enter the student %d  mark %d :",j+1,i+1);
            scanf("%d",&s[j].mark[i]);
        }
    }   

for(int j=0;j<3;j++)
    {

    printf("\nStudent id : %d",s[j].id);
    printf("\nStudent name : %s",s[j].name);
    printf("\nStudent marks:");

    for(int i=0 ; i<3; i++)
    {
        printf("\nmark %d : %d",i+1,s[j].mark[i]);
        
    }
}



}
