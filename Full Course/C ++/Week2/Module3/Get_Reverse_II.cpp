#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int clas;
        char section;
        int id;
};        
int main()
{
    int n;
    cin>>n;
    Student* stu = new Student[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].name>>stu[i].clas>>stu[i].section>>stu[i].id;
    }
    for(int i=0;i<n/2;i++)
    {
        int rev= stu[i].id;
        stu[i].id = stu[n-1-i].id;
        stu[n-1-i].id=rev;

    }
    for(int i=0;i<n;i++)
    {
        cout<<stu[i].name<<" "<<stu[i].clas<<" "<<stu[i].section<<" "<<stu[i].id<<endl;
    }
    return 0;
}