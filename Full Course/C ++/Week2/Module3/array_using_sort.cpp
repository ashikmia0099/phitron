#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int mark;
};
int main()
{
    student a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].mark;
        cin.ignore();
    }
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(a[i].mark<a[j].mark)
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
    }
    return 0;
}