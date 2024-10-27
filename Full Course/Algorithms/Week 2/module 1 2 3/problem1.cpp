#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int>adj[N];
bool visited[N];


int bfs(int s,int d)
{
    queue<pair<int,int>>q;
    q.push({s,0});
    visited[s] = true;
    
    while (!q.empty())
    {
        int n = q.front().first;
        int dis = q.front().second;
        q.pop();
        
        if(n == d) return dis;

        for(int v: adj[n])
        {
            if(!visited[v])
            {
                q.push({v,dis+1});
                visited[v]=true;
            }
            
        }
    }
    return -1;
    

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
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int s,d;
        cin>>s>>d;
        for(int i=0;i<n;i++)
        {
            visited[i] = false;

        }
        int distance = bfs(s,d);
        if(visited[d] != -1)
        {
            cout<<distance<<endl;
        }

        
        
    }
    
    return 0;
}