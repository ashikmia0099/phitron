#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>qu;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        qu.push(x);

    }
    while (!qu.empty())
    {
        
        
        cout<<qu.front()<<endl;
        qu.pop();

    }
    


    return 0;
}