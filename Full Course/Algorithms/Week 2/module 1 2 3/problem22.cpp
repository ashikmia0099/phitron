// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5+1;
// vector<int>adj[N];
// bool visited[N];

// void bfs(int s, int l,vector<int>& shoplevel)
// {
//     queue<int>q;
//     q.push(s);
//     visited[s] = true;
//     int level = 0;
    

//     while(!q.empty())
//     {
//         int size = q.size();
        
//         for(int i=0;i<size;i++)
//         {
//             int f = q.front();
//             q.pop();
            
//             if(level == l)
//             {
//                 shoplevel.push_back(f);
//             }
//             for(int v : adj[f])
//             {
//                 if(!visited[v])
//                 {
//                     q.push(v);
//                     visited[v] = true;
//                 }
//             }
//         }
//         if(level == l)break;
//         level++;
//     }
// }
// int main()
// {
//     int n,e;
//     cin>>n>>e;
//     vector<int<vector<int>adj(n);
//     for(int i=0;i<e;i++)
//     {
//         int a,b;
//         cin>>a>>b;
//         adj[a].push_back(b);
//         adj[b].push_back(a);

        
//     }
//     int l;
//     cin>>l;
//     vector<int>shoplevel;
//     bfs(0,l,shoplevel);
//     if(shoplevel.empty())
//     {
//         cout<<-1<<endl;
//     }
//     else
//     {
//         sort(shoplevel.begin(),shoplevel.end());

//         for(int s:shoplevel)
//         {
//             cout<<s<<" ";
//         }
//     }

//     return 0;
// }





#include <iostream>
#include <vector>

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
    cin >> n >>e;

    vector<vector<int>> adj(n + 1); 
    vector<bool> visited(n + 1, false);
    for (int i = 0; i <e; i++) {
        int u,v;
        cin >> u>> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<vector<int>>nodes;
    for(int i=1;i<=n;i++)
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
    sort(ss.begin(),ss.end());
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

