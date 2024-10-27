#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+3;
vector<int>adj[N];
bool visited[N];
int level[N];
int parant[N];

void bfs(int s)
{
    queue<int>q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    parant[s] = -1;

    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        for(int v: adj[f])
        {
            if(visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[f]+1;
            parant[v] = f;

        }
    }
    
}
int main()
{
    int n,e;
    cin>> n>> e;
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int x,y;
    cin>>x>>y;

    // bfs time complixity O(n+m)
    bfs(x);
    cout<<"Distance: "<< level[y]<<endl;
    

    // path finding time conplixity O(N)
    vector<int>path;
    int current = y;
    while (current != -1)
    {
        path.push_back(current);
        current = parant[current];

    }
    reverse(path.begin(), path.end());
    cout<<"path :";
    for(int node : path)
    {
        cout<<node<<" ";
    }
    
    return 0;
}

