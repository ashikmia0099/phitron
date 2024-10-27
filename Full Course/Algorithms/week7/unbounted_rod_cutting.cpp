#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int Unbonted(int n, int w, int value[], int weight[])
{
    if(n == 0 || w == 0) return 0;
    if(dp[n][w] != -1) return dp[n][w];
    if(weight[n-1] <= w)
    {
        int opt1 = value[n-1] + Unbonted(n, w-weight[n-1], value, weight);
        int opt2 = Unbonted(n-1, w, value, weight);
        return dp[n][w] = max(opt1, opt2);
    }
    else
    {
        return dp[n][w] = Unbonted(n-1, w, value, weight);
    }
    
}
int main()
{
    int n;
    cin>>n;
    int v[n], w[n];
    for(int i=0; i<=n; i++)
    {
        for(int j= 0; j<=n; j++)
        {
            dp[i][j] = -1;
        }
    }
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        w[i] = i+1;
    }
    cout<<Unbonted(n, n,v,w)<<endl;
    return 0;
}