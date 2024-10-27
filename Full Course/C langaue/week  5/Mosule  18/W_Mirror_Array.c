#include<stdio.h>
int main()
{
    int row,colum;
    scanf("%d %d",&row,&colum);
    int array[row][colum];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=colum-1;j>=0;j--)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}