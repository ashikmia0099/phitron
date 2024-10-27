#include<bits/stdc++.h>
using namespace std;
int main()
{
    // type 1

    // int n;
    // cin>>n;
    // cin.ignore();
    // vector<string> v(n);
    // for(int i =0; i < n; i++)
    // {
    //     getline(cin,v[i]);

    // }
    // for(string val: v)
    // {
    //     cout<<val<<endl;
    // }

    // type 2

    int z;
    cin>>z;
    vector<string> v;
    for(int j=0; j<z; j++)
    {
        string x;
        cin>>x;
        v.push_back(x);
    }
    for(string val: v)
    {
        cout<<val<<endl;
    }
    return 0;
}