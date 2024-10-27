#include<iostream>
#include<utility>
using namespace std;
// void my_swap(int *a,int *b)
// {
//     int tpm=*a;
//     *a=*b;
//     *b=tpm;
// }
// int main()
// {
//     int a,d;
//     cin>>a>>d;
//     my_swap(&a,&d);
//     cout<<a<<" "<<d<<endl;
//     return 0;
// }
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}