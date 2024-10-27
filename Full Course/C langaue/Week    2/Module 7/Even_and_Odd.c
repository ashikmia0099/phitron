#include<stdio.h>
int main()
{
    int n,j,sum_even  =0,sum_odd=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&j);
        if(j%2==0)
        {
            sum_even=sum_even+j;
        }
        else
        {
            sum_odd=sum_odd+j;
        }
    }
    printf("%d %d",sum_even,sum_odd);
    return 0;
}