#include<bits/stdc++.h>
using namespace std;
int parent[1000];

void set_node(int n)
{
    for(int i= 0; i<n; i++)
    {
        parent[i] = -1;
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
        parent[leaderB]  = leaderA;
    }
}
int main()
{
    int n,e;
    cin>>n>>e;
    set_node(n);
    while(e--)
    {
        int a,b;
        cin>> a>> b;
        dsu_union(a,b);
    }
    cout<<dsu_find(5)<<endl;
    return 0;
}

