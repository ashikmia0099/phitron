#include<stdio.h>
int sum(int a,int b)
{
    int sumation = a+b;
    return sumation;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int result=sum(a,b);
    printf("%d\n",result);
    return 0;
}