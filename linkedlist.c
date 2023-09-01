#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *Head = NULL;
void Insertion_At_Beg(int data)
{
    struct Node *newnode;
    
    newnode = (struct Node*)malloc(1*sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    
    if(Head == NULL)
        Head = newnode;
    else
    {
        newnode->next = Head ;
        Head = newnode;
    }
    
}
void Deletion_At_Beg()
{
    struct Node *delnode;
    if (Head == NULL)
        printf("No node to delete");
    else if (Head->next == NULL)
    {
        delnode = Head;
        Head = NULL ;
        free(delnode);
    }
    else
    {
        delnode = Head;
        Head = Head->next;
        free(delnode);
    }
}
void Display()
{
    struct Node *temp;
    temp = Head ;
    while(temp->next!= NULL)
    {
        printf("%d===>",temp->data);
        temp = temp->next ;
    }
    printf("%d\n",temp->data);
}
int main()
{
    printf("\nEnter 1 to Insert at Begining :- ") ;
    printf("\nEnter 2 to Delete at Ending :- ");
printf("\nEnter 3 to display :- ");
printf("Enter 4 exit :- ");
int n,data,pos;
    printf("\nEnter your Choice :- ");
    scanf("%d",&n);
    
    while(n!=-1)
    {
        switch(n)
        {
case 1:
            {
                printf("Enter the data:- ");
                scanf("%d",&data);
                Insertion_At_Beg(data);
                printf("%d is Inserted at Begining",data);
                break;
            }
case 2:
            {
                Deletion_At_Beg();
                printf("Value Deleted at Begining");
                break;
            }
case 3:
            {
                printf("The Linked List is :- ");
                Display();
                break;
            }
default :
            {
                printf("Enter Valid Input");
                break;
            }
        }
        printf("\n\nEnter your Choice :- ");
        scanf("%d",&n);
    }
    printf("Program Finished :- ");
    return 0;
}
