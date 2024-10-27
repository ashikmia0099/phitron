#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<long long>sum(n);
    sum[0] = a[0];
    for(int i=1; i<n; i++)
    {
        sum[i] = sum[i-1]+a[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        cout<<sum[i]<<" ";
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
    
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     vector<long long> prefixSum(n);
//     prefixSum[0] = a[0];
//     for (int i = 1; i < n; i++)
//     {
//         prefixSum[i] = prefixSum[i - 1] + a[i];
//     }

//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << prefixSum[i] << " ";
//     }

//     return 0;
// }
