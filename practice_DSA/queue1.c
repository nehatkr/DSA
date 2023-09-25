#include <stdio.h>
#include <stdlib.h>
#define size 7
int queue[size];
int front = -1;
int rear = -1;

void insert()
{
    int ele;
    if (rear == size - 1)
        printf("Queue is full\n");
    else
    {
        if (front == -1)
            front = 0; //increased by 1
        rear = rear + 1;
        printf("Enter element\n ");
        scanf("% d", &ele);
        queue[rear] = ele;
    }
}
void display(){
    int i;
    if (front==-1)
    {
       printf("Queue is empty\n");

    }
    else{
        printf("\nFollowing are the queue elements\n");
        for ( i = front; i <= rear; i++)
        {
          printf("%d",queue[i]);
        }
        
    }
    
}
void Delete(){
    if ((front == -1)||(front==rear+1))
    {
       printf("Queue is empty\n");
    }
    else{
        printf("\nEnter deleted is : %d", queue[front]);
        front = front+1;
    }
    
}
int main(){
    insert();
    display();
    Delete();
    display();
    return 0;
}