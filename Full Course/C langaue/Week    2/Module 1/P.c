#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int ans = x/1000;
    if(ans %2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }    
    return 0;
}
