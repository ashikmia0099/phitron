#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin,s);
        string word;
        stringstream ss(s);
        map<string,int>mp;
        while (ss>>word)
        {
            mp[word]++;
        }
        int count_max = 0;
        string max_word;
        for(auto it = mp.begin(); it != mp.end();it++)
        {
            if(it->second <count_max)
            {
                count_max = it->second;
                max_word = it->first;
            }
        }
        cout<<count_max<<" "<<max_word<<endl;
    }
    
    
    return 0;
}
