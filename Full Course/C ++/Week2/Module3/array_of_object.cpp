#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    int mark;

};
int main()
{
    Person a[3];
    
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].age>>a[i].mark;
        cin.ignore();
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<" "<<a[i].age<<" "<<a[i].mark<<endl;
    }

    return 0;
}