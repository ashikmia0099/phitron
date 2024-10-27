#include<stdio.h>
int main()

{
    int i;
    for (i=1;i<=5;i=i+1)
    {
        if(i%2 == 0)
        {
            printf("%d even_number\n",i);
        }
        else
        {
            printf("%d odd_numer\n",i);
        }
    }
    return 0;
}