#include<bits/stdc++.h>
using namespace std;
long long int mx =1e18;

class Edge
{
public:
    int u;
    int v;
    long long int w;

    Edge(int u, int v, long long int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int main()
{
    int n , e;
    cin>> n >> e;
    vector<Edge>v;
    while(e--)
    {
        long long int a, b,w;
        cin>> a>> b>> w;
        Edge ed(a,b,w);
        v.push_back(ed);
        
    }
    long long int dis[n+1];
    for (int i=1; i<=n; i++)
    {
        dis[i] = mx;
        
    }
    int s,t;
    cin>>s>>t;
    dis[s] = 0;
    for(int i = 1; i<=n-1; i++)
    {
        for(int j = 0; j<v.size(); j++)
        {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if(dis[a]!=mx && dis[a]+w < dis[b])
            {
                dis[b] = dis[a]+w;
            }
        }
    }
    bool cycle = false;
    for(int i = 1; i<=n-1; i++)
    {
        for(int j = 0; j<v.size(); j++)
        {
            Edge ed = v[j];
            int a = ed.u;
            int b = ed.v;
            int w = ed.w;
            if(dis[a]!=mx && dis[a]+w < dis[b])
            {
                cycle = true;
                break;
            }
        }
    }
    
    while (t--)
    {
        int d;
        cin >> d;

        if (!cycle)
        {
            if (dis[d] == mx)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }

    return 0;
}