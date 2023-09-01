#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *front = NULL ;
struct Node *rear = NULL;
void Enqueue(int data)
{
	struct Node *temp,*newnode;
	temp = front;
	
	newnode = (struct Node *)malloc(sizeof(struct Node));
	newnode->data = data;
	newnode->next = NULL;
	
	if(front==NULL && rear==NULL)
    {
        front = rear = newnode;
    }
	else
	{
		rear->next = newnode ;
		rear = newnode;
	}
}
void Deque()
{
    struct Node *temp;
	temp = front;
	
	if(front==NULL && rear==NULL)
	{
	    printf("Underflow");
		return;
    }
	else
	{
        front = front->next;
        free(temp);
	}
}
void Peek()
{
    if (front==NULL && rear==NULL)
    {
        printf("Underflow");
    }
    else
    {
        printf("\nfront = %d ",front->data);
    }
}
void Display()
{
    struct Node *temp ;
    if (front==NULL && rear==NULL)
    {
        printf("Underflow");
    }
    else
    {
        temp = front;
	    while( temp != NULL)
	    {
	    	printf("%d ",temp->data);
	    	temp = temp->next;
	    }
    }
}
int main()
{
    Enqueue(1);
    Enqueue(2);
    Enqueue(3);
    Display();
    Deque();
    Display();
    Peek();
}
