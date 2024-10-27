
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    int chr[26]={0};
    for (int i=0;i<strlen(s);i++)
    {
        int vel = s[i]-'a';
        chr[vel]++;
    }
    for(int i=0;i<26;i++)
    {
        printf("%c - %d\n",i+'a',chr[i]);
    }
    return 0;
}