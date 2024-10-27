#include<bits/stdc++.h>
using namespace std;

pair<int,int> count_hight_value(int a[], int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    int total_max_val = a[0];
    int count_max_index = mp[a[0]];
    for(auto value : mp)
    {
      
        if(value.second > count_max_index || (value.second == count_max_index && value.first > total_max_val))
        {
            count_max_index = value.second;
            total_max_val = value.first;
        }
    }  
    return make_pair(total_max_val,count_max_index); 
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        pair<int,int> result = count_hight_value(a,n);
        cout<<result.first<<" "<<result.second<<endl;
    }
    
    return 0;
}