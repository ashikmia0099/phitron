#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50};
    vector<int> y ={1 , 2 , 3 , 4};
    v.insert(v.begin() + 0, y.begin(), y.end());
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}