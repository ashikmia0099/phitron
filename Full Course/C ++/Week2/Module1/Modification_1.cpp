#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string a="hello";
    // string b="world";
    //a+=b;
    //cout<<a<<endl;
    //a.append(b);
    // a.pop_back();
    // a.pop_back();
    // a.push_back('g');
    // cout<<a<<endl;

    //erase

    string s="helloworld";
    s.erase(2,1);
    cout<<s<<endl;
    s.replace(4,0,"As");
    cout<<s<<endl;
    return 0;
} 