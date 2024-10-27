#include<stdio.h>
int main()
{
    int a,b,diff;
    scanf("%d %d",&a,&b);
    diff= a-b;
    if(diff>=0)
    {
        printf("%d\n",diff);
    }
    else
    {
        printf("0\n",diff);
    }
    return 0;
}