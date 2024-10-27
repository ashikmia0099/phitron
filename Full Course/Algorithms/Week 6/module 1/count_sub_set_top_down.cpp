#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int Sub_set_sum(int n, int a[], int sum)
{
    if(n == 0)
    {
        if(sum == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(dp[n][sum] != -1) 
    {
        return dp[n][sum];
    }
    
    if(a[n-1] <= sum)
    {
        int opt1 = Sub_set_sum(n-1, a, sum - a[n-1]);
        int opt2 = Sub_set_sum(n-1,a,sum);
        return dp[n][sum] = opt1 + opt2;
    }
    else
    {
        return dp[n][sum] =  Sub_set_sum(n-1,a,sum);
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
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=sum; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout<<Sub_set_sum(n,a,sum)<<endl;
    
    return 0;
}

