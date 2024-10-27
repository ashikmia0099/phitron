#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int mark;
};        
int main()
{
    int n;
    cin>>n;
    Student* student = new Student[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>student[i].name>>student[i].roll>>student[i].mark;
    }
    for(int i=n-1;i>= 0;i--)
    {
        cout<<student[i].name<<" "<<student[i].roll<<" "<<student[i].mark<<endl;
    }
    return 0;
}