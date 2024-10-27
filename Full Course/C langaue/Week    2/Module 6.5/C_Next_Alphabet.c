#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a' && a<'z')
    {
        a=a+1;
    }
    else if(a=='z')
    {
        a='a';
    }
    printf("%c\n",a);
    return 0;
}