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
    int x;
    scanf("%d",&x);
    int flag =0;
    for(int i=0;i<array[i];i++)
    {
        for(int j=i+1;j<array[i];j++)
        {
            if(array[i]+array[j]==x)
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }
    
    return 0;
}