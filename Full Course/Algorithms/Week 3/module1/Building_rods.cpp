#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
vector<bool> visited (N,false);

void dfs(int s)
{
    visited[s] = true;

    for(int v : adj[s])
    {
        if(visited[v] == true) continue;
        dfs(v);
    }
}
int main()
{
    int n,m;
    cin>> n >> m;
    for(int i=0; i< m; i++)
    {
        int u, v;
        cin>> u >> v;
        adj[u]. push_back(v);
        adj[v]. push_back(u);
    }

    vector<int> leader;

    for(int i=1; i<=n ; i++)
    {
        if(visited[i]) continue;
        leader.push_back(i);
        dfs(i);
    }
    cout<<leader.size()-1 <<endl;
    for(int i=0; i<leader.size()-1; i++)
    {
        cout<<leader[i] <<" "<<leader[i+1]<<endl;
    }
    return 0;
}