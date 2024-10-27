#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int l, int m,int r )
{
    int leftsize = m-l+1;
    int rightsize = r - m;
    
    int L[leftsize];
    int R[rightsize];
    int k = 0;

    for(int i=l; i<=m; i++)
    {
        L[k]  = a[i];
        k++;
    }
    int t = 0;
    for(int j =m+1 ; j<= r; j++)
    {
        R[t] = a[j];
        t++;
    }
    int i = 0, j = 0;
    int curr=l;
    while(i<leftsize && j< rightsize)
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
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    merge(a,0,3,n-1);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}
