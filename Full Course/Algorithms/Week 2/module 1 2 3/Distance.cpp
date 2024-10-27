#include<bits/stdc++.h>
using namespace std;
const int M = 1e5+5;
vector<int> adj[M];
bool visited[M];
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
    int N,E;
    cin>>N>>E;
    for(int i=0;i<E;i++)
    {
        int A,B;
        cin>>A>>B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }
    int Q;
    cin>>Q;
    for(int i=0;i<Q;i++)
    {
        int S,D;
        cin>>S>>D;
        for(int j=0;j<=M;j++)
        {
            visited[j] = false;

        }
        int distance = bfs(S,D);
        cout<<distance<<endl;
        
    }
    
    return 0;
}