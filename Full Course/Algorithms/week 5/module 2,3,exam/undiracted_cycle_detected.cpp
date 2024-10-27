#include<bits/stdc++.h>
using namespace std;
int parent[1000];
int parentlevel[1000];

void set_node(int n)
{
    for(int i= 0; i<n; i++)
    {
        parent[i] = -1;
        parentlevel[i] = 0;
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
        if(parentlevel[leaderA] > parentlevel[leaderB])
        {
            parent[leaderA]  = leaderB;
           
        }
        else if(parentlevel[leaderB] > parentlevel[leaderA])
        {
            parent[leaderB] = leaderA;
        }
        else
        {
            parent[leaderB] = leaderA;
            parentlevel[leaderA]++;
        }
        
        
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
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if(leaderA == leaderB)
        {
            cout<<"Cycle detected:"<< a<<" "<<b<<endl;
        }
        else
        {
            dsu_union(a,b);
        }
        
    }
    return 0;
}

