#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int mark;
};
bool compair(student a,student b)
{
    if(a.mark>b.mark)
    {
        return true;
    }
    else return false;
}
int main()
{
    student a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].mark;
        cin.ignore();
    }
    sort(a,a+3,compair);
    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].mark<<endl;
    }
    return 0;
}