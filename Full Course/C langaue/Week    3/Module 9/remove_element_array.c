#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int pos;
    scanf("%d",&pos);
    for(int i=pos;i<=pos-1;i++)
    {
        array[i]=array[i-1];
    }
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}
