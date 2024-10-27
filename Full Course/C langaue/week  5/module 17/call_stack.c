#include<stdio.h>
void world()
{
    printf("World start\n");
    printf("World End\n");
}
void hello()
{
    printf("Hello star\n");
    world();
    printf("Hello end\n");

}
int main()
{
    printf("Main star\n");
    hello();
    printf("main end\n");
    return 0;
}