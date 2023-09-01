// Implementation of Stack using Arrays
#include<stdio.h>
#define N 5
int Stack[N];
int top=-1;
int IsFull()
{
    if(top==N-1)
        return 1;
    else
        return 0;
}
int IsEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
void Push(int data)
{
    if(IsFull())
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        Stack[top] = data ;
        printf("%d is Pushed onto stack\n",Stack[top]);
    }
}
void Pop()
{
    if(IsEmpty())
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d is Popped from stack\n",Stack[top]);
        top--;
    }
}
void Top()
{
    if(IsEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("%d is Top of stack\n",Stack[top]);
    }
}
void Size()
{
    printf("Size of Stack is %d\n",top+1);
}
void Display()
{
    if(IsEmpty())
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack :- ");
        for(int i=top;i>=0;i--)
        {
            printf("%d ",Stack[i]);
        }
    }
}
int main()
{
    printf("\nEnter 1 to Push an Element onto Stack ");
    printf("\nEnter 2 to Pop an Element from Stack ");
    printf("\nEnter 3 to print top element from Stack ");
    printf("\nEnter 4 to check is stack is Empty ");
    printf("\nEnter 5 to check is stack is Full ");
    printf("\nEnter 6 to print size of Stack ");
    printf("\nEnter 7 to Display the Stack ");
    printf("\nEnter -1 to EXIT the program ");
    
    int n,data;
    printf("\nEnter Your Choice :- ");
    scanf("%d",&n);
    
    while(n!=-1)
    {
        switch(n)
        {
            case 1:
            {
                printf("Enter element to be Pushed in to stack :- ");
                scanf("%d",&data);
                Push(data);
                break;
            }
            case 2:
            {
                Pop();
                break;
            }
            case 3:
            {
                Top();
                break;
            }
            case 4:
            {
                if(IsEmpty())
                    printf("Stack is Empty\n");
                else
                    printf("Stack is Not Empty\n");
                break;
            }
            case 5:
            {
                if(IsFull())
                    printf("Stack is Full\n");
                else
                    printf("Stack is Not Full\n");
                break;
            }
            case 6:
            {
                Size();
                break;
            }
            case 7:
            {
                Display();
                break;
            }
            default:
            {
                printf("Enter Valid Input");
            }
        }
        printf("\nEnter Your Choice :- ");
        scanf("%d",&n);
    }
    printf("Program Terminated");
    return 0;
}
