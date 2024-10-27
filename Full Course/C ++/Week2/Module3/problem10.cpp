// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++)
//     {
//         string s,x;
//         cin>>s>>x;
//         int pos = 0;
//         while(s.find(x,pos) != -1)
//         {
//             s.replace(pos,x.length(),"$");
//             pos+=1;
//         }
//         cout<<s<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++)
//     {
//         string s, x;
//         cin >> s >> x;

//         int pos = 0;
//         while (s.find(x, pos) != -1)
//         {
//             s.replace(pos, x.length(), "$");
//             pos +=x.length();
//         }

//         cout << s << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i= 0; i<t; i++)
    {
        string s,x;
        cin >>s>>x;

        int pos=0;
        while ((pos = s.find(x, pos)) != -1)
        {
            s.replace(pos, x.length(),"$");
            pos += x.length();
        }

        cout<<s<<endl;
    }

    return 0;
}
