#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node *next;
};
struct Node *top = NULL;
void Push(int data)
{
    struct Node *newnode;
    newnode = (struct Node*)malloc(1*sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    if (top==NULL)
        top = newnode;
    else
    {
        newnode->next  = top;
        top = newnode;
    }
}
void Pop()
{
    if (top==NULL)
        printf("Empty List");
    else
    {
        top = top->next;
    }
}
int IsEmpty()
{
    if (top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void Peek()
{
    if (top==NULL)
    {
        printf("Empty Stack");
    }
    else
    {
        printf("%d ",top->data);
    }
}
void Display()
{
    struct Node *tempnode;
    tempnode = top;
    if (IsEmpty())
        printf("Empty List");
    else
    {
        while(tempnode->next !=NULL)
        {
            printf("%d===>",tempnode->data);
            tempnode = tempnode->next;
        }
        printf("%d\n",tempnode->data);
    }
}
int main()
{
	Push(1);
    Push(2);
    Push(3);
    Display();
    Pop();
    Display();
    Peek();
    printf("\n%d",IsEmpty());
	return 0;
}
