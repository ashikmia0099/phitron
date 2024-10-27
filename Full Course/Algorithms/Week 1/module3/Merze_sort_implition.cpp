// #include<bits/stdc++.h>
// using namespace std;


// int main()
// {
//     int n;
//     cin>>n;
//     int num[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>num[i];
//     }
//     sort(num,num + n);
//     for(auto x: num)
//     {
//         cout<<x<<" ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(auto x: num)
    {
        cout<<x<<" ";
    }
    return 0;
}