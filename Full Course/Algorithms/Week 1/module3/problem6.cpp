// #include<bits/stdc++.h>
// using namespace std;

// const int N=1e5+7;
// int num[N];
// void merge(int l,int r,int mid)
// {
//     int left_size = mid -l+1;
//     int L[left_size +1];

//     int right_size = r - mid;
//     int R[right_size +1];

//     for(int i = l ,j=0; i<=mid;i++,j++)
//     {
//         L[j] = num[i];
//     }
//     for(int i= mid+1,j=0; i<=r;i++,j++)
//     {
//         R[j] = num[i];
//     }

//     L[left_size] = INT_MIN;
//     R[right_size] = INT_MIN;

//     int lp = 0,rp = 0;
//     for(int i=l;i<=r;i++)
//     {
//         if(L[lp] > R[rp])
//         {
//             num[i] = L[lp];
//             lp++;
//         }
//         else
//         {
//             num[i] = R[rp];
//             rp++;
//         }
//     }

// }
// int main()
// {
    
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int a;
//         cin>>a;
//         for(int j=0;j<a;j++)
//         {

//         }
//     }
    
    
//     for(int i=0;i<n;i++)
//     {
//         cout<<num[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] > arr2[j])
            result[k++] = arr1[i++];
        else
            result[k++] = arr2[j++];
    }

    while (i < n1)
        result[k++] = arr1[i++];

    while (j < n2)
        result[k++] = arr2[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        int n1 = mid - left + 1;
        int n2 = right - mid;

        int* leftArray = new int[n1];
        int* rightArray = new int[n2];

        for (int i = 0; i < n1; i++)
            leftArray[i] = arr[left + i];
        for (int j = 0; j < n2; j++)
            rightArray[j] = arr[mid + 1 + j];

        int i = 0, j = 0, k = left;
        while (i < n1 && j < n2) {
            if (leftArray[i] >= rightArray[j])
                arr[k++] = leftArray[i++];
            else
                arr[k++] = rightArray[j++];
        }

        while (i < n1)
            arr[k++] = leftArray[i++];
        while (j < n2)
            arr[k++] = rightArray[j++];

        delete[] leftArray;
        delete[] rightArray;
    }
}

int main() {
    int n1, n2;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    mergeSort(arr1, 0, n1 - 1);
    mergeSort(arr2, 0, n2 - 1);

    int result[n1 + n2];
    mergeArrays(arr1, n1, arr2, n2, result);

    for (int i = n1 + n2 - 1; i >= 0; i--)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
