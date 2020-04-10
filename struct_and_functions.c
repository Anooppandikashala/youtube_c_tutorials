#include<stdio.h>



struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    struct Date joining_date;
};

struct Date getDate(int day,int month,int year)
{
    struct Date date;
    date.day = day;
    date.month = month;
    date.year = year;

    return date;
}

void printDate(struct Date date)
{
    printf("\n%d/%d/%d",date.day,date.month,date.year);
}

void main()
{
    struct Employee e1;

    e1.id = 100;
    e1.joining_date.day=1;
    e1.joining_date.month = 3;
    e1.joining_date.year = 2020;

    printf("\n%d",e1.id);

    struct Date date = getDate(30,1,2020);

    printDate(date);
    
    printDate(e1.joining_date);

}


