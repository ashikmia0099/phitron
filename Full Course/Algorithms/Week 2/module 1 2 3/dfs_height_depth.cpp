#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>adj[N];
bool visited[N];
int deepth[N];
int hight[N];

void dfs(int u)
{
    visited[u] = true;
    for(int v: adj[u])
    {
       if(visited[v] == true) continue;
       deepth[v] = deepth[u] +1; 
       dfs(v);
       if(hight[v]+1 > hight[u])
       {
        hight[u] = hight[v]+1;
       }
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int v,u;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1);

    for(int i=1;i<=n;i++)
    {
        cout<<deepth[i]<<endl;
    }


    // for(int i=1;i<=n;i++)
    // {
    //     cout<<"Hight of tree"<<i<<": "<<hight[i]<<endl;
    // }
    return 0;
}