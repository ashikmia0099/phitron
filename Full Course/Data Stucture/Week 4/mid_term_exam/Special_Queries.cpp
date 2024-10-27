#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    queue<string>qu;
    for(int i=0; i<n;i++)
    {
        int command;
        cin>>command;
        if(command == 0)
        {
            string name;
            cin>>name;
            qu.push(name);
            
        }
        else if(command == 1)
        {
            if(!qu.empty())
            {
                cout<<qu.front()<<endl;
                qu.pop();
            }
            else
            {
                cout<<"Invalid"<<endl;
            }
            
            
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
        
    }
    return 0;
}