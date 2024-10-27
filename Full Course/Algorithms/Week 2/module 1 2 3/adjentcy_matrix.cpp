#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int adjet[N][N];
int main()
{
    
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v ,w;
        cin>>u >>v >> w;
        adjet [u] [v] = w; // diracted way
        adjet [v] [u] = w; // undiractd way

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<adjet[i] [j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}