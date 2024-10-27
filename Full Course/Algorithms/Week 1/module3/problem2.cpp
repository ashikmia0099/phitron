#include<bits/stdc++.h>
using namespace std;
int find_terget(int arr[],int n, int x)
{
    
    int left = 0, right =n-1;
    while(left<= right)
    {
        int mid = (left + right)/2;
        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid]< x)
        {
            left = mid+1;
        }
        else
        {
            right = mid -1;
        }
     }
     return 1;
     

    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    int x;
    cin>>x;
    int index = find_terget (arr,n,x);
    if(index != 1)
    {
        cout<<index<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    
    return 0;
}