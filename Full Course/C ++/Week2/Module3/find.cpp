#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    getline(cin,n);
    bool find = false;
    for(int i=0;i<n.size();i++)
    {
        if(n[i] == "rahim")
        {
            find = true;
        }
        else
        {
            find = false;
            break;
        }
    }
    if(find)
    {
        cout<<"Paice"<<endl;
    }
    else
    {
        cout<<"pai nai"<<endl;
    }
    return 0;
}