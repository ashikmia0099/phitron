// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// void count_min(vector<int>& A, int Q) {
//     priority_queue<int, vector<int>, greater<int>> pr(A.begin(), A.end());

//     while (Q--) {
//         int c;
//         cin >> c;
//         if (c == 0) { // Insert and print minimum
//             int x;
//             cin >> x;
//             pr.push(x);
//             cout << pr.top() << endl;
//         } else if (c == 1) { // Print minimum
//             if (!pr.empty()) {
//                 cout << pr.top() << endl;
//             } else {
//                 cout << "Empty" << endl;
//             }
//         } else if (c == 2) { // Delete minimum and print new minimum
//             if (!pr.empty()) {
//                 pr.pop();
//                 if (!pr.empty()) {
//                     cout << pr.top() << endl;
//                 } else {
//                     cout << "Empty" << endl;
//                 }
//             } else {
//                 cout << "Empty" << endl;
//             }
//         }
//     }
// }

// int main() {
//     int n, Q;
//     cin >> n;

//     vector<int> A(n);
//     for (int i = 0; i < n; i++) {
//         cin >> A[i];
//     }

//     cin >> Q;
//     count_min(A, Q);

//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
void count_min(vector<int>& a,int q)
{
    priority_queue<int,vector<int>,greater<int>>pr(a.begin(),a.end());
    
    while (true)
    {
        int c;
        cin>>c;
        if(c == 0) //push korte
        {
            int x;
            cin>>x;
            pr.push(x);
            cout<<pr.top()<<endl;
        }
        
        else if(c == 1) // print min
        {
            if(!pr.empty())
            {
                cout<< pr.top()<<endl;
                
            }
            else
            {
                cout<<"Empty"<<endl;
            }   
        }
        else if(c == 2) // val pop
        {
            if(!pr.empty())
            {
                pr.pop();
            } 
            else
            {
                cout<<"Empty"<<endl;
            }
            
        }
        else
        {
            break;
        }
        
    }
}
int main()
{
    int n,q;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        
    }
    cin>>q;
    count_min(a, q);


    return 0;
}