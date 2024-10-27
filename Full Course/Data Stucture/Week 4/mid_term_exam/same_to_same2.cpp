#include<bits/stdc++.h>
using namespace std;
bool same_to_same(int n, int m,stack<int> & st, queue<int> & qu)
{
    while (!st.empty() && !qu.empty())
    {
        int stacktop = st.top();
        int queuefront = qu.front();
        if(stacktop != queuefront) 
        {
            return false;
        }
        st.pop();
        qu.pop();
        
    }
    return st.empty() && qu.empty();
}
int main()
{
    stack<int> st;
    queue<int> qu;
    int n,m;
    cin>>n;
    cin>>m;
    for(int i=0 ; i<n ; i++)
    {
        int x;
        cin>>x;
        st.push(x);
        
    }
    for(int j=0; j<m; j++)
    {
        int y;
        cin>>y;
        qu.push(y);
    }
    
    if(same_to_same(n,m,st,qu))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}