#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min_ind=0,max_ind=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[min_ind])
        min_ind=i;
        {
            if(arr[i]>arr[max_ind])
            max_ind=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}