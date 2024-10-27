#include<stdio.h>
int main()
{
    int row,colum;
    scanf("%d %d",&row,&colum);
    int a[row] [colum];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // intput colum code 

    // int e;
    // scanf("%d",&e);
    // for(int i=0;i<colum;i++)
    // {
    //     printf("%d ",a[e][i]);
    // }

    //input row code 

    int k;
    scanf("%d",&k);
    for (int m=0;m<row;m++)
    {
        printf("%d ",a[m][k]);
    }
    return 0;
}