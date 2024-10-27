//string size

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello world";
//     cout<<s.size()<<endl;
//     return 0;
// }

//string Maximum_size

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello world";
//     cout<<s.max_size()<<endl;
//     return 0;
// }

//string capacity

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello world";
//     cout<<s.capacity()<<endl;
//     return 0;
// }

// string clear

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s="hello world";
//     cout<<s<<endl;
//     s.clear();
//     cout<<s<<"this list is clear"<<endl;
//     return 0;
// }

// string empty

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello world";
    s.clear();
    if(s.empty()==true)
    {
        cout<<"Empty"<<endl;
    }
    else
    {
        cout<<"Not empty"<<endl;
    }
    return 0;
}

// string resize

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello world";
    s.resize(5);
    cout<<s<<endl;
    return 0;
}