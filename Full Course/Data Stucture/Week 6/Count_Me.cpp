#include<bits/stdc++.h>
using namespace std;


void string_freq(string S, map<string,int>& word_freq)
{
    stringstream ss(S);
    string word;
    while (ss >> word)
    {
        word_freq[word]++;
    }
    
}
int main()
{
    
    int T;
    cin>>T;
    cin.ignore();
    for(int i=0;i<T;i++)
    {
        string S;
        getline(cin,S);
        map<string,int>mp;
        stringstream ss(S);
        string max_word ;
        int count = INT_MIN;
        string word;
        while (ss>>word)
        {
            mp[word]++;
            if(mp[word]>count )
            {
                count = mp[word];
                max_word = word;

            }
        }
        
        cout<<max_word<<" "<<count<<endl;

    }
    return 0;
}
