

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int num[N];
void merge(int arr[],int l,int r,int mid)
{
    int left_size = mid -l+1;
    int L[left_size +1];

    int right_size = r - mid;
    int R[right_size +1];

    for(int i = l ,j=0; i<=mid;i++,j++)
    {
        L[j] = num[i];
    }
    for(int i= mid+1,j=0; i<=r;i++,j++)
    {
        R[j] = num[i];
    }

    L[left_size] = INT_MIN;
    R[right_size] = INT_MIN;

    int lp = 0,rp = 0;
    for(int i=l;i<=r;i++)
    {
        if(L[lp] > R[rp])
        {
            arr[i] = L[lp];
            lp++;
        }
        else
        {
            arr[i] = R[rp];
            rp++;
        }
    }

}
void mergesort(int arr[],int l,int r)
{
    if(l >= r)
    {
        return;
    } 
    int mid = (l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,r,mid);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int m;
    cin>>m;
    for(int j=0;j<m;j++)
    {
        cin>>num[n+j];
    }
    mergesort(num,0,n+m-1);
    for(int i=0;i<n+m;i++)
    {
        cout<<num[i]<<" ";
    }

    return 0;
}