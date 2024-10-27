#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i= 0; i<T; i++)
    {
        string S,X;
        cin>>S>>X;
        size_t pos=0;
        while ((pos = S.find(X, pos)) !=-1)
        {
            S.replace(pos, X.length(),"$");
            pos += 1;
        }

        cout<<S<<endl;
    }

    return 0;
}
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;

//     for (int i = 0; i < T; i++) {
//         string S, X;
//         cin >> S >> X;

//         size_t pos = 0;
//         while ((pos = S.find(X, pos)) != std::string::npos) {
//             S.replace(pos, X.length(), "$");
//             pos += 1;
//         }

//         cout << S << endl;
//     }

//     return 0;
// }
