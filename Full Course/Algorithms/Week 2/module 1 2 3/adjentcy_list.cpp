#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+6;
vector<pair<int,int>>ajd[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        ajd[u].push_back({v,w});
        ajd[v].push_back({u,w});

    }
    for(int i=1;i<=n;i++)
    {
        cout<<"List"<<i<<":"<<" ";
        for(auto j:ajd[i])
        {
            cout<<"("<<j.first<<","<<j.second<<")"<<" ";
        }
        cout<<endl;
    }
    return 0;
}