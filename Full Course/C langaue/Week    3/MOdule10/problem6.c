#include<stdio.h>
int main()
{
    int N,X1,X2;
    scanf("%d",&N);
    X1=0;
    X2=0;
    for(int i=0;i<N;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            X1++;
        }
        else if(x<y)
        {
            X2++;
        }
    }
    if(X1>X2)
    {
        printf("Tiger\n");
    }
    else if(X1<X2)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
    
    
    return 0;
}

