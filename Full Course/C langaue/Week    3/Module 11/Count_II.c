
#include<stdio.h>
int main()
{
    char s[1000];
    int count=0;
    scanf("%s",s);
    for(int i=0;s[i] !='\0';i++)
    {
        if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] =='o' ||s[i]=='u')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}