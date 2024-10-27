#include<stdio.h>
int main()
{
    char a[100];
    fgets(a,10,stdin);
    printf("%s",a);
    return 0;
}
