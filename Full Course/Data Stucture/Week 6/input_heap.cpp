#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    
    int n;
    cin>>n;
    for(int i= 0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);

        int curr_index = v.size()-1;
        while (curr_index != 0)
        {
            int prn_index = (curr_index -1) / 2;
            if(v[prn_index] > v[curr_index])
            {
                swap(v[prn_index] , v[curr_index]);
            }
            else
            {
                break;
            }
            curr_index = prn_index;
        }
    }
    for(int val : v) cout<<val<<" ";
    
    return 0;
}