#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    int pos,vel;
    scanf("%d %d",&pos,&vel);
    for(int i=n;i>=pos+1;i--)
    {
        array[i]= array[i-1];
    }
    array[pos]=vel;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
}