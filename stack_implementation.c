#include <stdio.h>
#define MAX_ARRAY_SIZE 10

int stack_array[MAX_ARRAY_SIZE];
int top = -1;

int isEmpty()
{
    //TODO code here
    if (top == -1)
        return 1;

    return 0;
}

void print()
{
    //TODO code here
    if (isEmpty())
    {
        printf("Stack is empty");
        return;
    }
    int i;
    for (i = 0; i <= top; i++)
    {
        printf("\t%d", stack_array[i]);
    }
}

int isFull()
{
    //TODO code here
    if (top == MAX_ARRAY_SIZE - 1)
        return 1;

    return 0;
}

void push()
{
    //TODO code here
    if (isFull())
    {
        printf("\nStack Overflow");
        return;
    }

    int element;
    printf("\nEnter element to add :");
    scanf("%d", &element);
    top = top + 1;
    stack_array[top] = element;
    print();
}

int pop()
{
    //TODO code here
    if (isEmpty())
    {
        printf("\nStack underflow");
        return -1;
    }
    int element = stack_array[top];
    top = top - 1;
    print();
    return element;
}

int getUserActions()
{
    printf("\n1. Push");
    printf("\n2. Pop");
    printf("\n3. is Empty");
    printf("\n4. is Full");
    printf("\n5. print");
    printf("\n6. Exit");
    printf("\nEnter your choice : ");

    int input;
    scanf("%d", &input);
    return input;
}

int main()
{
    //TODO code here
    int key = 1;
    while (key)
    {
        int input = getUserActions();
        switch (input)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            if (isEmpty())
                printf("\nStack is empty");
            else
                printf("\nStack is not empty");
            break;

        case 4:
            if (isFull())
                printf("\nStack is full");
            else
                printf("\nStack is not full");
            break;
        case 5:
            print();
            break;
        case 6:
            key = 0;
            break;
        default:
            printf("\nInvalid choice");
            break;
        }
    }
}