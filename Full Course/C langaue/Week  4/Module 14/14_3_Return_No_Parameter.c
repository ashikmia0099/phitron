#include<stdio.h>
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    return s;
}
int main()
{
    int k=sum();
    printf("%d",k);
    return 0;
}