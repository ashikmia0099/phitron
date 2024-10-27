#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {50,40,45,30,35,42,32,25,20,10};
    
    int x;
    cin>>x;
    v.push_back(x);

    int curr_index = v.size()-1;
    while (curr_index != 0)
    {
        int prn_index = (curr_index -1) / 2;
        if(v[prn_index] < v[curr_index])
        {
            swap(v[prn_index] , v[curr_index]);
        }
        else
        {
            break;
        }
        curr_index = prn_index;
    }
    for(int val : v) cout<<val<<" ";
    
    return 0;
}