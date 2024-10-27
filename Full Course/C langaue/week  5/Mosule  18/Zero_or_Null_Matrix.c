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
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colum;j++)
        {
            if(a[i][j] == 0)
            {
                count++;
            }
        }
    }
    int element = row*colum;
    if(element == count)
    {
        printf("Zero metrix");
    }
    else
    {
        printf("Not zero metrix");
    }
    return 0;
}