#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val; // ptr top is the top most position of the stack
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i)
{
    int arrayInt = sp->top - i + 1;
    if (arrayInt < 0)
    {
        printf("Not a valid position for the stack \n");
        return -1;
    }
    else
    {
        return sp->arr[arrayInt];
    }
}

int stackTop(struct stack*sp){
    return sp->arr[sp->top];
}

int stackBottom (struct stack*sp){
    return sp->arr[0];
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1; // stack is empty
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully\n");

    printf("Before pushing , Full:%d\n", isFull(sp));
    printf("Before pushing , Empty:%d\n", isEmpty(sp));
    push(sp, 56);
    push(sp, 6);
    push(sp, 81);
    push(sp, 12);
    push(sp, 10);
    push(sp, 9);
    push(sp, 26);
    push(sp, 68);
    push(sp, 66);
    push(sp, 5);

    printf("The top most value of this stack is %d\n",stackTop(sp));
    printf("The bottom most value of this stack is %d\n",stackBottom(sp));

    // printf("After pushing , Full:%d\n", isFull(sp));
    // printf("After pushing , Empty:%d\n", isEmpty(sp));

    // printf("popped %d from the stack\n", pop(sp));
    // printf("popped %d from the stack\n", pop(sp));
    // printf("popped %d from the stack\n", pop(sp));

    // for (int i = 1; i <= sp->top + 1; i++)
    // {
    //     printf("The value at position %d is %d\n ", i, peek(sp, i));
    // }

    return 0;
}