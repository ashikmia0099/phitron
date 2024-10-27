#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,3,4,3,4,4};
    auto it = find (v.begin(),v.end(),1);
    if(it == v.end()) cout<<"not found"<<endl;
    else cout<<"found"<<endl;
    return 0;
}