#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,3,4,3,4,4};
    replace(v.begin(),v.end(),4,10);
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}