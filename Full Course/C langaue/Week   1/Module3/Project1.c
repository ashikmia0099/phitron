
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n % 7 == 0)
    {
    printf("YES");
    }
	else if (n % 3 == 0)
	{
		printf("Yes");
	}
    else
    {
        printf("NO");
    }
    return 0;
}