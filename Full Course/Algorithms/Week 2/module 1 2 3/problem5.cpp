#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+2;
vector<int>adj[N];
bool visited[N];



int dfs(int s )
{
    visited[s] = true;
    int count = 1;
    for(int v: adj[s])
    {
        if(!visited[v])
        {
            count += dfs(v);
            
        }
        
    }
    return count;
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>>connected();
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            int nodesize = dfs(i);
            connected.push_back(nodesize);
        }
    }
    sort(connected.begin(),connected.end());
    for(int count:connected)
    {
        cout<<count<<" ";
    }
    cout<<endl;
    
    return 0;
}

