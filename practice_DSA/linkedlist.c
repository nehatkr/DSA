#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *addr;
} *start = NULL, *temp, *p;
void creatnode()
{
    int i, n, e;
    printf("Enter the number of element");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        temp = malloc(sizeof(struct node));
        printf("Enter the data");
        scanf("%d", &e);
        temp->data = e;
        temp->addr = NULL;
        if (start == NULL)
        {
            start = temp;
        }
        else
        {
            p = start;
            while (p->addr != NULL)
            {
                p = p->data;
            }
            p->addr = temp;
        }
    }
}
void display()
{
    if (start == NULL)
        printf("linked list is empty");

    else
    {
        printf("Following are the element of the linked list");
        p = start;
        while (p != NULL)
        {
            printf("%d", p->data);
            p = p->addr;
        }
    }
}
void insert_beg()
{
    int e;
    temp = malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d", &e);
    temp->data = e;
    temp->addr = start;
    start = temp;
}

void insert_mid()
{
    int e, pr;
    temp = malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d", &e);
    printf("Enter the previous element\n");
    scanf("%d", &pr);
    temp->data = e;
    p = start;
    while (p->data != pr)

        p = p->data;
    temp->addr = p->addr;
    p->addr = temp;
}
void insert_last()
{
    int e;
    temp = malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d", &e);
    temp->data = e;
    temp->addr = NULL;
    p = start;
    while (p->addr != NULL)

        p = p->addr;
    p->addr = temp;
}

void delete_beg()
{
    temp = start;
    start = temp->addr;
    free(temp);
}

void delete_last()
{
    p = start;
    while (p->addr->addr != NULL)
        p = p->addr;
    temp = p->addr;
    p->addr = NULL;
    free(temp);
}
void delete_mid()
{
    int e;
    temp = malloc(sizeof(struct node));
    printf("Enter the you want to delete\n");
    scanf("%d", &e);
    p = start;
    while (p->addr->data != e)
        p = p->addr;
    temp = p->addr;
    p->addr = temp->addr;
    free(temp);
}
int main(){
    creatnode();
    insert_beg();
    delete_beg();
    return 0;
}
