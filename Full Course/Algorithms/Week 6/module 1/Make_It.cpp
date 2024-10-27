#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int dp[N];
bool Make_it(int i ,int n)
{    
    if(i == n) return true;
    if(i>n) return false;
    if(dp[i] != -1 )
    {
        return dp[i];
    }
    bool opt1 = Make_it(i + 3, n);
    bool opt2 = Make_it(i * 2, n);

    return dp[i] =  opt1 || opt2;
}
int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
        int n;
        cin>>n;
        for(int j = 0; j<=n; j++)
        {
            dp[j] = -1;
        }
        if(Make_it(1,n))
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
