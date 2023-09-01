// BUBBLE SORT


#include <stdio.h>
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void BubbleSort(int n, int arr[])
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                Swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void Display(int n, int arr[])
{
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Before Sorting :- ");
    Display(n,arr);  
    
    BubbleSort(n,arr);
    
    printf("\nAfter Sorting :- ");
    Display(n,arr);

    return 0;
}
