#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l, int m,int r)
{
    int leftsize = m-l+1;
    int rightsize = r-m;
    int L[leftsize],R[rightsize];
    int k=0;

    for(int i=l; i<=m; i++)
    {
        L[k] = a[i];
        k++;
    }
    int t =0;
    
    for(int i=m+1; i<=r; i++)
    {
        R[t] = a[i];
        t++;
    }
    int i = 0, j= 0;
    int curr = l;
    while(i<leftsize && j<rightsize)
    {
        if(L[i] <= R[j])
        {
            a[curr] = L[i];
            i++;
        }
        else
        {
            a[curr] = R[j];
            j++;
        }
        curr++;
    }
    while (i<leftsize)
    {
        a[curr] = L[i];
        i++;
        curr++;
    }
    while (j<rightsize)
    {
        a[curr] = R[j];
        j++;
        curr++;
    }
    
    


}
void merge_sort(int a[], int l, int r)
{
    if(l<r)
    {
        int mid = (l+r) / 2;
        merge_sort(a, l,mid);
        merge_sort(a,mid+1,r);
        merge(a,l,mid,r);
        cout<<"This"<<endl;
        for(int i=l; i<=mid;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        for(int i=mid+1; i<=r;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
       
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}