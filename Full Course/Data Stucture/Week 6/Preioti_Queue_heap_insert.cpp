#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>pr;

    while (true)
    {
        int c;
        cin>>c;
        if(c == 0)
        {
            int x;
            cin>>x;
            pr.push(x);
        }
        else if(c == 1)
        {
            pr.pop();
        }
        else if(c == 2)
        {
            cout<< pr.top()<<endl;
        }
        else
        {
            break;
        }
        
    }
    
    return 0;
}