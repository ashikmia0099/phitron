#include<bits/stdc++.h>
using namespace std;
int main()
{
    // type 1
    // vector<int>v;
    // cout<<v.size()<<endl;

    //type 2
    // vector<int>v(5);
    // cout<<v.size()<<endl;

    //type3
    // vector<int>v(5,2);
    // for(int i=0; i<v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // cout<<v.size()<<endl;

    //type 4 akta vector thaka arakta vector a copy korar niyom

    // vector<int>v(5,10);
    // vector<int>v2(v);
    // for(int i=0; i<v.size() ;i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // cout<<v.size()<<endl;

    // vector a array ar use case

    int a[6]= {1,2,3,4,5,6};
    vector<int>v(a,a+6);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;


    return 0;
}