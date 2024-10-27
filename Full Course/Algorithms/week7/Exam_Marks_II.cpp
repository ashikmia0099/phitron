#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>> n>> m;
        int a[n];
        for(int i=0; i< n; i++)
        {
            cin>>a[i];
        }
        int sum = 1000 - m;
        bool dp[n + 1][sum + 1];
        memset(dp, false, sizeof(dp));

        for(int i=0; i<=n; i++)
        {
            dp[i][0] = true;    
        }
        for(int i= 1; i <= n; i++)
        {
            for(int j = 1; j<= sum; j++)
            {
                if(a[i-1] <= j)
                {
                    dp[i][j] = dp[i][j-a[i-1]] || dp[i][j] ;
                }
                dp[i][j] =dp[i][j] ||  dp[i-1][j];
            }
        }
        if(dp[n][sum])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}