#include<stdio.h>
void fun(int array[],int n,int i)
{
    if(i==n) return;
    printf("%d\n",array[i]);
    fun(array,n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    fun(array,n,0);
    return 0;
}