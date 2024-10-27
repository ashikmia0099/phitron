#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int clas;
        char section;
        int math_mark;
        int eng_mark;
};        
int main()
{
    int n;
    cin>>n;
    Student* stu = new Student[n]; 
    for(int i=0;i<n;i++)
    {
        cin>>stu[i].name>>stu[i].clas>>stu[i].section>>stu[i].math_mark>>stu[i].eng_mark;
    }
    for(int i=n-1;i>= 0;i--)
    {
        cout<<stu[i].name<<" "<<stu[i].clas<<" "<<stu[i].section<<" "<<stu[i].math_mark<<" "<<stu[i].eng_mark<<endl;
    }
    return 0;
}