#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];
int parentsize[N];
int count_cycle = 0;

void dsu_set(int n)
{
    for(int i=1; i<=n; i++)
    {
        parent[ i] = -1;
        parentsize[i] = 1; 
    }
}
int dsu_find(int node)
{
    while(parent[node] != -1)
    {
        node = parent[node];
    }
    return node;
}
void dsu_union(int a, int b)
{
    int leaderA = dsu_find(a);
    int leaderB = dsu_find(b);
    if(leaderA != leaderB)
    {
        if(parentsize[leaderA] > parentsize[leaderB])
        {
            parent[leaderB] = leaderA;
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
    int n, e;
    cin>> n>> e;
    dsu_set(n);
    while(e--)
    {
        int a,b;
        cin>> a>>b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);

        if(leaderA == leaderB)
        {
            count_cycle++;
        }
        else
        {
            dsu_union(a,b);
        }
        
    }
    cout<<count_cycle<<endl;
    return 0;
}