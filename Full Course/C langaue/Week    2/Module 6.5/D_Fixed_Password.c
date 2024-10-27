
#include<stdio.h>
int main()
{
    int a;
    while(scanf("%d", &a) != EOF)
    {
        if(a==1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(int i=1;i<=n; i++)
    {
        if(n%i==0)
        printf("\n%d",i);
    }
    return 0;
}