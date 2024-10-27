// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string name;
//     getline(cin,name);
//     string find_name = "Ratul";
//     bool found = false;
//     for(int i=0;i<name.length();i++)
//     {
//         if(name[i]==' ')
//         {
//             i++;
//         }
//         if(name[i]=='R' && name[i+1]=='a' && name[i+2] == 't' && name[i+3] == 'u' && name[i+4] == 'l')
//         {
//             found = true;
//             break;
//         }
//     }
//     if(found)
//     {
//         cout<<"YES"<<endl;
//     }
//     else
//     {
//         cout<<"NO"<<endl;
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    bool found = false;
    while(ss >> word)
    {
        if(word == "Ratul")
        {
            found = true;
            break;
        }
    }
    if(found)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
