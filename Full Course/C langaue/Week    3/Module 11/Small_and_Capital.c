#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    scanf("%s",a);
    int uper = 0;
    int lower = 0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            uper++;
        }
        else if (a[i]>='a' && a[i]<='z')
        {
            lower++;
        }
    }
    
    printf("%d %d ",uper,lower);
    return 0;
}