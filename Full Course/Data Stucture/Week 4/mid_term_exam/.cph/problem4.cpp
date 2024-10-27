#include<bits/stdc++.h>
using namespace std;
bool validstring(string s)
{
    stack<char>st;
    for (char ch : s)
    {
        if(ch == 'A' && !st.empty() && st.top() == 'B' )
        {
            st.pop();
        }
        else if(ch == 'B' && !st.empty() && st.top() == 'A')
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
        
    }
    return st.empty();
    
}
int main()
{
    int n;
    cin>>n;
    for(int i= 0;i<n; i++)
    {
        string s;
        cin>>s;
        if(validstring(s))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        

    }
    return 0;
}