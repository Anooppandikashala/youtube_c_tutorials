#include<stdio.h>

struct student 
{
  int id;
  char name[40];
};

void main()
{
   struct student s, *s_ptr;
   s_ptr = &s;

   printf("\nEnter the student id :");
   
   scanf("%d",&(s_ptr->id));

   printf("\nEnter the student name :");
   
   scanf("%s",s_ptr->name);


   printf("\nid : %d",s_ptr->id);
   printf("\nname : %s",s_ptr->name);
}