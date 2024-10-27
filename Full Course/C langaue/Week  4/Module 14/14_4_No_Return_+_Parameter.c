#include<stdio.h>
void sum(int a,int b)
{
    int s=a+b;
    printf("%d",s);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    sum(x,y);
    return 0;
}