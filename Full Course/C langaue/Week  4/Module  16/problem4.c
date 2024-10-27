
// 1...Has Return + Parameter

#include<stdio.h>
int sum(int a,int b,int c)
{
    int total_sum=(a+b+c);
    return total_sum;
}
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int s=sum(x,y,z);
    printf("%d",s);
    return 0;
}


// 2...Has Return + No Parameter

#include<stdio.h>
int mainus()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int m=a-b;
    return m;
}
int main()
{
    int ans=mainus();
    printf("%d\n",ans);
    return 0;
}


// 3...No Return + Parameter

#include<stdio.h>
void multiple(int a,int b)
{
    int Total_multiple = a*b;
    printf("%d",Total_multiple);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    multiple(a,b);
    return 0;
}


// 4...No Return + No Parameter

#include<stdio.h>
void Multiple_and_sum(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int s=a*b+c;
    printf("%d",s);
}
int main()
{
    Multiple_and_sum();
    return 0;
}