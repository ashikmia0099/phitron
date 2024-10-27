#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 30, 40 , 50, 60, 70};
    //v.erase(v.begin()+2); //only one value erase
    v.erase(v.begin()+1,v.begin()+5); // multiple value erase
    for(int x: v)
    {
        cout<<x<<" ";
    }
    return 0;
}