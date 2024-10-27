#include<stdio.h>
int main()
{
    int row,colum;
    scanf("%d %d",&row,&colum);
    int a[row][colum],b[row][colum],c[row][colum];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}