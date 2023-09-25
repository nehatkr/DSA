#include <stdio.h>
#include <stdlib.h>
#define size 7
int cq[size]; // cq -> circular queue
int front = -1;
int rear = -1;
void insert()
{
    int ele;
    if ((front == 0 && rear == size - 1) || (front = rear + 1))
    {
        printf("circular Queue is full");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        if (rear == size - 1)
        {
            rear = 0;
        }
        else
        {
            rear = rear + 1;
            printf("enter the element");
            scanf("%d", &ele);
            cq[rear] = ele;
        }
    }
}
void display()
{
    int i;
    if (front == -1)
        printf("Circular queue is full");
    else
    {
        printf("Following are ciecular queue elements:\n");
        if (front <= rear)
        {
            for (i = front; i <= rear; i++)
            {
                printf("%d\n", cq[i]);
            }
        }
        else
        {
            for (i = front; i <= size - 1; i++)
                printf("%d", cq[i]);
            for (i = 0; i <= rear; i++)
                printf("%d", cq[i]);
        }
    }
}
void Delete(){
    if (front == -1)
    printf("Circular queue is empty");
    else{
        printf("Element deleted is %d",cq[front]);
        
    }
    if(front == rear)
    front = -1;
    else if(front == size-1)
    front = 0;
    else 
    front = front+1;
    
}
int main(){
    insert();
    display();
    Delete();
    display();

    
}