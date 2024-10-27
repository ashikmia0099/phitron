#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int array[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(array[i]>array[j])
            {
                int tmp =array[i];
                array[i]=array[j];
                array[j]=tmp;
            }
        }
    }
    int middle = N/2;
    if(N%2==0)
    {
        printf("%d %d",array[middle-1],array[middle]);
    }
    else
    {
        printf("%d",array[middle]);
    }
    return 0;
}