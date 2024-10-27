#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+2;
vector<int>adj[N];
bool visited[N];


void bfs(int s,vector<int>&count )
{
    queue<int>q;
    q.push(s);
    visited[s] = true;
    
    while(!q.empty())
    {
        int f= q.front();
        q.pop();

        for(int v: adj[f])
        {
            if(visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            count[v] = count[f]+1;

        }

    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    vector<int>count(n+1,0);

    bfs(1,count);
    int node;
    cin>>node;
    cout<<count[node]<<endl;
    return 0;
}