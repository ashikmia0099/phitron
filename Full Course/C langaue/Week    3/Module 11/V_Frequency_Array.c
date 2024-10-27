#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    int cmd[6]={0};
    for(int i=0;i<n;i++)
    {
        int val=a[i];
        cmd[i]++;
    }
    for(int i=0;i<=6;i++)
    {
        printf("%d - %d\n",cmd[i]);
    }
    return 0;
}