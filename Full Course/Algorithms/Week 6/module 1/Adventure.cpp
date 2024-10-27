#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int Knawsap(int N, int W, vector<int> & v, vector<int> & w)
{
    for(int i=0; i<=N; i++)
        {
            for(int j=0; j<=W; j++)
            {
                if(i== 0 || j == 0)
                {
                    dp[i][j] = 0;
                }

            }
        }
        for(int i=1; i<=N; i++)
        {
            for(int j=1; j<=W; j++)
            {
                if(v[i-1] <= j)
                {
                    int opt1 = dp[i-1][j - v[i-1]] + w[i-1];
                    int opt2 = dp[i-1][j];
                    dp[i][j] = max (opt1,opt2);
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }   
            }
        }
        return dp[N][W];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,W;
        cin>> N>> W;
        vector<int> v(N);
        vector<int>w(N);
        
        for(int i = 0; i<N; i++)
        {
            cin>>v[i];
        }
        for(int j= 0; j<N; j++)
        {
            cin>>w[j];
        }
        int result = Knawsap(N,W,v,w);
        cout<<result<<endl;
    }
    return 0;
}