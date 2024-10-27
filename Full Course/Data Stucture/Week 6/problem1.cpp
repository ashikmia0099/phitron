#include<bits/stdc++.h>
using namespace std;
void sort_val(int a[],int n)
{
    sort(a,a+n,greater<int>());
}
int remove_duplicat(int a[],int n)
{
    
    int new_val= 0;
    for(int i = 0;i<n;i++)
    {
        
        if(i == 0 || a[i] != a[i-1])
        {
            a[new_val++] = a[i];
        }

    }
    return new_val;

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
        sort_val(a,n);
        int new_list = remove_duplicat(a,n);
        for(int j = 0;j<new_list;j++)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;

    }
    

    return 0;
}

