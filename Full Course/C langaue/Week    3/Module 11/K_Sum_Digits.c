

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum =0;
    for (int i=0;i<n;i++)
    {
        int digit;
        scanf("%1d",&digit);
        sum+= digit;
    }
    printf("%d\n",sum);
    return 0;
}
