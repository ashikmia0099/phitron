#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001];
    fgets(a,1001,stdin);
    int spaces = 0,small=0,capital =0;

    for (int i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            spaces++;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            capital++;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            small++;
        }
    }
    printf("Capital - %d\n",capital);
    printf("Small - %d\n",small);
    printf("Spaces - %d\n",spaces);
    return 0;
}