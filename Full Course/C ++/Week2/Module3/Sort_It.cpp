#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int clas;
    char section;
    int id;
    int math_mark;
    int eng_mark;
};
bool Std(student a, student b)
{
    if (a.eng_mark + a.math_mark > b.eng_mark + b.math_mark)
        return true;
    else if (a.eng_mark + a.math_mark == b.eng_mark + b.math_mark && a.id < b.id)
        return true;
    else
        return false;
}
int main()
{
    int n;
    cin>>n;
    student* Student = new student[n];
    for(int i=0;i<n;i++)
    {
        cin>>Student[i].name>>Student[i].clas>>Student[i].section>>Student[i].id>>Student[i].math_mark>>Student[i].eng_mark;

    }
    sort(Student,Student+n,Std);
    for(int i=0;i<n;i++)
    {
        cout<<Student[i].name<<" "<<Student[i].clas<<" "<<Student[i].section<<" "<<Student[i].id<<" "<<Student[i].math_mark<<" "<<Student[i].eng_mark<<endl;
    }
     
    return 0;
}