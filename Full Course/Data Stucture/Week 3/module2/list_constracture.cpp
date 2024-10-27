#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list size bar korta
    // list<int>mylist;
    // cout<<mylist.size()<<endl;

    // size a value input kora
    // list<int>mylist(10);
    // cout<<mylist.size()<<endl;

    // full list dakar jonno for loop a iterator ar use
    // list<int>mylist(5,3);
    // for(auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout<< *it<<endl;
    // }

    // elements copy
    // list<int>list2 = {100,200,300,400};
    // list<int>mylist(list2);
    // for(auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout<< *it<<endl;
    // }

    // array copy

   int a[5] = {2,4,5,6,7};
   list<int>mylist(a,a+5);
   for(auto it = mylist.begin(); it != mylist.end(); it++)
   {
        cout<< *it<<endl;
   }
    
    return 0;
}