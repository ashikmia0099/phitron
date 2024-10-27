#include<stdio.h>
int main()
{
    char a[]="Ashik\0";
    int size=sizeof(a)/sizeof(char);
    printf("%d\n",size);
    printf("%s",a);
    return 0;
}