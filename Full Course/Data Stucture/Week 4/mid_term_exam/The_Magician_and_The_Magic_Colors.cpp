#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t; i++)
    {
        
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
       for(char c: s)
       {
        if(!st.empty() && st.top() == c)
        {
            st.pop();
        }
        else if(!st.empty())
        {
            if((st.top() =='R' && c=='B') || (st.top() =='B' && c=='R'))
            {
                st.pop();
                if(!st.empty() && st.top() =='P')
                {
                    st.pop();
                }
                else
                {
                    st.push('P');
                }
            }
            else if((st.top() =='R' && c=='G') || (st.top() =='G' && c=='R'))
            {
                st.pop();
                if(!st.empty() && st.top() =='Y')
                {
                    st.pop();
                }
                else
                {
                    st.push('Y');
                }
            }
            else if((st.top() =='B' && c=='G') || (st.top() =='G' && c=='B'))
            {
                st.pop();
                if(!st.empty() && st.top() =='C')
                {
                    st.pop();
                }
                else
                {
                    st.push('C');
                }
            }
            else
            {
                st.push(c);
            }
            
        }
        else
        {
            st.push(c);
        }
        
    }
    stack<char>newval;
    while (!st.empty())
    {
        newval.push(st.top());
        st.pop();
    }
    while (!newval.empty())
    {
        cout<<newval.top();
        newval.pop();
    }
    cout<<endl;
    
    


    }

    return 0;
}
