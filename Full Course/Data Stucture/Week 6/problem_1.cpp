#include<bits/stdc++.h>
using namespace std;
// void sort_val(int a[],int n)
// {
//         for(int i=0;i<n-1;i++)
//         {
//             for(int j = 0;j<n-i-1;j++)
//             {
//                 if(a[j] < a[j+1])
//                 {
//                     int tmp = a[j];
//                     a[j] = a[j+1];
//                     a[j+1] = tmp;
//                 }
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             cout<<a[i]<<" ";
//         }
// }
void remove_duplicat(int a[],int n)
{
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(a[i]);
    }
    for(auto it = s.begin(); it != s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
        for(int i=0;i<n-1;i++)
        {
            for(int j = 0;j<n-i-1;j++)
            {
                if(a[j] < a[j+1])
                {
                    int tmp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tmp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    
}
int main()
{
    int t;
    cin>>t;
    for(int i = 0;i<t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0; j<n;j++)
        {
            int x;
            cin>>a[j];
            
        }
        
        remove_duplicat(a,n);
        cout<<endl;
        
    }

    return 0;
}

