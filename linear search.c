//Linear Search


#include <stdio.h>
void LinearSearch(int n, int arr[], int key)
{
    for(int i=0;i<n;i++)
    {
        if (key==arr[i])
        {
            printf("Value found at index %d",i);
            return ;
        }
    }
    printf("Value not found");
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
    
    LinearSearch(n,arr,key);
    
    return 0;
}
