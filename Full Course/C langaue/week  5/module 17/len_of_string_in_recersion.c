#include<stdio.h>
int fun(char a[],int i)
{
    if(a[i]=='\0') return 0;
    int le = fun(a,i+1); 
    return 1+le;
}
int main()
{
    char a[10]="ashik";
    int len=fun(a,0);
    printf("%d\n",len);
    return 0;
}