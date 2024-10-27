#include<bits/stdc++.h>
using namespace std;
void terget(int arr[],int n, int x)
{
    bool found = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == x)
        {
            cout<<i<<" ";
            found = true;
        }
    }
    if(!found)
    {
        cout<<"Not found"<<endl;
    }

    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    int x;
    cin>>x;
    terget(arr,n,x);
    
    return 0;
}