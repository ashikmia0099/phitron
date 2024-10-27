#include<bits/stdc++.h>
using namespace std;

void dfs(int s, vector<vector<int>>& adj, vector<bool>&visited, vector<int>& count)
{
    visited[s] = true;
    count.push_back(s);
    
    for(int v: adj[s])
    {
        if(!visited[v])
        {
            dfs(v,adj,visited,count);
            
        }
        
    }
    
}
int main() {
    int n,e;
    cin >> n>>e;
    const int N = 1e5+1;
    vector<vector<int>> adj(N + 1); 
    vector<bool> visited(N + 1, false);
    for (int i = 0; i <e; i++) {
        int u,v;
        cin >> u>> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>>nodes;
    for(int i=1;i<=N;i++)
    {
        if(!visited[i])
        {
            vector<int>count;
            dfs(i,adj,visited,count);
            nodes.push_back(count);
        }
    }
    vector<int>ss;
    for(vector<int> &count: nodes)
    {
        ss.push_back(count.size());
    }

    sort(ss.begin(), ss.end());

    for(int val:ss)
    {
        if(val>1)
        {
            cout<<val<<" ";
        }
    }
    cout<<endl;

   
    return 0;
}

