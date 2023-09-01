// Binary Search


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
int BinarySearch(int arr[], int key,int l, int r)
{
    if(r>=l)
    {
        int mid = (l + r )/2 ;
        if (arr[mid]==key)
            return arr[mid];
        else if (arr[mid]>key)
            return (arr,key,l,mid-1);
        else
            return (arr,key,mid+1,r);
    }
    else
    {
        return -1;
    }
}
void Display(int n, int arr[n])
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
    
    int key;
    scanf("%d",&key);
    
    BubbleSort(n,arr);
    int res = BinarySearch(arr,key,0,n-1);
    
    Display(n,arr);
    if(res!=-1)
        printf("Value found at %d ",res);
    else
        printf("Value not found");
    
    return 0;
}
