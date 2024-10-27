#include<bits/stdc++.h>
using namespace std;

bool Sub_set_sum(int n, int a[], int sum)
{
    if(n == 0)
    {
        if(sum == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    if(a[n-1] <= sum)
    {
        int opt1 = Sub_set_sum(n-1, a, sum - a[n-1]);
        int opt2 = Sub_set_sum(n-1,a,sum);
        return opt1 || opt2;
    }
    else
    {
        return Sub_set_sum(n-1,a,sum);
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    if(Sub_set_sum(n,a,sum))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
      
    return 0;
}