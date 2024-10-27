#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int s,a,b,c;
    for(int i=0;i<t;i++)
    {
        scanf("%d %d %d %d",&s,&a,&b,&c);
        int missingNumber=s - a - b - c;
        printf("%d\n",missingNumber);
    }
    return 0;
}