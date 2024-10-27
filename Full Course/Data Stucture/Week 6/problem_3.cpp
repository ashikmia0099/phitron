#include<bits/stdc++.h>
using namespace std;
void count_min(vector<int>& a,int q)
{
    priority_queue<int,vector<int>,greater<int>>pr(a.begin(),a.end());
    
    while (q--)
    {
        int c;
        cin>>c;
        if(c == 0)
        {
            int x;
            cin>>x;
            pr.push(x);
            cout<<pr.top()<<endl;
        }
        
        else if(c == 1)
        {
            if(!pr.empty())
            {
                cout<< pr.top()<<endl;
                
            }
            else
            {
                cout<<"Empty"<<endl;
            }   
        }
        else if(c == 2)
        {
            if(!pr.empty())
            {
                pr.pop();
                if(!pr.empty())
                {
                    cout<<pr.top()<<endl;
                }
                else
                {
                    cout<<"Empty"<<endl;
                }
            } 
            else
            {
                cout<<"Empty"<<endl;
            }
            
        }
        else
        {
            break;
        }
        
    }
}
int main()
{
    int n,q;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    cin>>q;
    count_min(a, q);


    return 0;
}