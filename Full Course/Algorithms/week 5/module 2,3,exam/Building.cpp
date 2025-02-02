#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];
int parentsize[N];
class Edge
{
    public:
    int a,b,w;
    Edge(int a, int b, int w)
    {
        this->a = a;
        this->b = b;
        this->w = w;
    }

};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

void dsu_set(int n)
{
    for(int i= 1; i<=n; i++)
    {
        parent[i] = -1;
        parentsize[i] = 1;
    }
}
int dsu_find(int Node)
{
    while(parent[Node] != -1)
    {
        Node = parent[Node];

    }
    return Node;
}
void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if(leaderA != leaderB)
    {
        if(parentsize[leaderA] > parentsize[leaderB])
        {
            parent[leaderB]  = leaderA;
            parentsize[leaderA] += parentsize[leaderB];
        }
        else
        {
            parent[leaderA] = leaderB;
            parentsize[leaderB] += parentsize[leaderA];
        }
        
    }
}
int main()
{
    int n,e;
    cin>> n>> e;
    vector<Edge>v;
    dsu_set(n);
    while(e--)
    {
        int a,b,w;
        cin>>a >> b>> w;
        v.push_back(Edge(a,b,w));

    }
    sort(v.begin(), v.end(),cmp);
    long long int ans = 0;
    for(Edge val: v)
    {
        int a = val.a;
        int b = val.b;
        int w = val.w;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if(leaderA != leaderB)
        {
            dsu_union(a,b);
            ans+=w;
        }
        
    }
    bool visited = true;
    for(int i=1; i<=n; i++)
    {
        if(parent[i] == -1)
        {
            if(visited) visited = false;
            else
            {
                cout<<"-1"<<endl;
                return 0;
            }
            
        }
    }
    cout<<ans<<endl;
    
    return 0;
}