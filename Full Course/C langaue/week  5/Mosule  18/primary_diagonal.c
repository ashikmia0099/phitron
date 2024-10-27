#include<stdio.h>
int main()
{
    int row,colum;
    scanf("%d %d",&row,&colum);
    int a[row][colum];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    if(row != colum)
    {
        flag =0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            if(i == j)
            {
                continue;
            }
            if(a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if(flag == 1)
    {
        printf("Primary Diagonal\n");
    }
    else
    {
        printf("Not diogonal\n");
    }
    return 0;
}