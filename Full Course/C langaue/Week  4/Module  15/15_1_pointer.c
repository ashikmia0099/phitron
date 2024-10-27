#include<stdio.h>
int main()
{
    int x=100;
    int *ptr = &x;
    printf("x ar address - %p\n",&x);
    printf("ptr er value - %p\n",ptr);
    printf("ptr ar value -%p",&ptr);
    printf("ptr of mammory size - %d\n",sizeof(ptr));
    return 0;
}