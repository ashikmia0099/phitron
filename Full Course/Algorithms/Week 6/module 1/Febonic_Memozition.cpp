#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll N= 1e5+5;
ll save[N];

ll Memozitio(int n)
{
    if(n== 0 || n== 1)
    {
        return 1;
    }
    if(save[n] != -1)
    {
        return save[n];
    }
    ll int ans = Memozitio(n-1);
    ll int ans1 = Memozitio(n-2);
    save[n] = ans + ans1;
    return save[n];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        save[i] = -1;
    }
    cout<<Memozitio(n)<<endl;
    return 0;
}