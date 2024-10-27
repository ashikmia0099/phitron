#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a , &b);
    if (a%b == 0)
    {
        printf("multiples\n");
    }
    else if (b%a == 0)
    {
        printf("multiples\n");
    }
    else
    {
        printf("NO multiples\n");
    }
    return 0;
}