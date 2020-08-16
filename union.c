#include<stdio.h>

union emp_union
{
	int id;
	char name[100];
	double salary;
		
};

void main()
{
		
	union emp_union eu;
	printf("\nSize of eu : %ld :\n",sizeof(eu));
	
	eu.id=1000;
	printf("\nid : %d :\n",eu.id);
	
	
	eu.salary = 199999;	
	printf("\nsalary : %f :\n",eu.salary);
}
