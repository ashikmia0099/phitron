#include<stdio.h>
#include<string.h>
int is_palindrom(char(str[]))
{
    int len=0;
    while(str[len] !='\0')
    {
        len++;
    }
    for(int i=0,j=len-1;i<len;i++,j--)
    {
        if(str[i] != str[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[11];
    scanf("%s",str);
    if(is_palindrom(str))
    {
        printf("palindrom\n");
    }
    else
    {
        printf("Not palinderom\n");
    }

    return 0;
}
