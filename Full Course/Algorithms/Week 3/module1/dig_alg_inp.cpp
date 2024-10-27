#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pii;
const int N = 1e5+5;
const int INF = 1e9+ 10;
vector<pii>adj[N];
vector<int>dist(N,INF);
vector<bool> visited(N);

void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    dist[source] = 0;
    pq.push({dist[source],source});

    while (!pq.empty())
    {
        int f = pq.top().second;
        pq.pop();

        visited[f] = true;

        for(pii vpair : adj[f])
        {
            int v = vpair.first;
            int w = vpair.second;

            if(visited[v]) continue;


            if(dist[v] > dist[f]+w)
            {
                dist[v] = dist[f] + w;
                pq.push({dist[v],v});
            }
        }
    }
    

}
int main()
{
    int n, e;
    cin>> n >> e;
    for(int i= 0 ; i<e ; i++)
    {
        int u, v, w;
        cin>>u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    dijkstra(1);

    for(int i = 1; i<=n;i++)
    {
        cout<<"Distance of node "<< i <<": ";
        cout<<dist[i]<<endl;
    }
    return 0;
}