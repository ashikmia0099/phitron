#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>adj[N];
bool visited[N];
int level[N];


void dfs(int s,int l)
{
    visited[s] = true;
    level[s] = l;
    for(int v : adj[s])
    {
        if(!visited[v])
        {
            dfs(v,l+1);
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
    int l;
    cin>>l;
    dfs(0,0);

    vector<int>f;
    for(int i=0;i<n;i++)
    {
        if(level[i] == l)
        {
            f.push_back(i);
        }
    }
    sort(f.begin(),f.end());

    for(int s:f)
    {
        cout<<s<<" ";
    }
    cout<<endl;

    return 0;
}


    