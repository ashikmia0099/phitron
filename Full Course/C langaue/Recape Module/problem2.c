#include<stdio.h>
int main()
{
    int n,row,col;
    scanf("%d",&n);
    if(n%2 == 0)
    {
        return 0;
    }
    row=n;
    col=n;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i==(n+1)/2 || j==(n+1)/2)
            {
                printf("#");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}