

#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&x);
    int count = 0;
    for (int i=0;i<n;i++)
    {
        if(array[i]==x)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
} 
