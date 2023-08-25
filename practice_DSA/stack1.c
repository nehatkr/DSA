#include <stdio.h>
#include <stdlib.h>
#define size 8
int stack[size], top = -1;
void push()
{
    int ele;
    if (top == size - 1)
    {
        printf("\t Stack is full...");
    }
    else
    {
        top = top + 1;
        printf("Enter the element");
        scanf("%d", &ele);
        stack[top] = ele;
        top = top + 1;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\n stack is empty .....\n");
    }
    else
    {
        printf("\n \t Element deleted is %d", stack[top]);
        top = top - 1;
    }
}

void display()
{

    if (top == -1)
    {
        printf("\t Stack is empty...");
    }
    else
    {
        printf("\n Following are stack element :\n");
        while (top >= 0)
        {
            printf("\t\n %d", stack[top]);
            top = top - 1;
        }
    }
}
int main()
{
    int ch; // choise of the operations
    printf("\t STACK OPERATIONS:\n\t1. PUSH\n\t2. POP\n\t3. DISPLAY\n\t4. EXIT\n\t");
    printf("Enter your choice here...");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        push();

    case 2:
        pop();

    case 3:
        display();

    case 4:
        exit(0);
        break;

    default:
        printf("\n Enter a valid choice only ....");
        break;
    }

    return 0;
}