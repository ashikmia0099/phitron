#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int pos,val;
    scanf("%d %d",&pos,&val);
    for(int i=n;i>=pos;i--)
    {
        array[i]=array[i-1];
    }
    array[pos]=val;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}