#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum[n];
    sum[0]=a[0];
    cout<<sum[]<<endl;
    for(int i= 1; i<n; i++)
    {
        sum[i] = sum[i-1] + a[i];
        cout<<sum<<" ";
    }    
    cout<<endl;
    
    return 0;
}


