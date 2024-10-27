#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n) != EOF)
    {
        if(n == 1999)
        {
            printf("Correct\n",n);
            break;
        }
        else
        {
            printf("Wrong\n",n);
        }
    }
    return 0;
}