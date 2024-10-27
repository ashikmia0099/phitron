#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
    Student(string name,int roll,int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class cmp
{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.marks < b.marks) return true;

            else return false;
            
        }
};
int main()
{
    int n;
    cin>>n;
    priority_queue<Student, vector<Student>,cmp>qp;

    for(int i =0; i<n;i++)
    {
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        qp.push(obj);
    }
    while (!qp.empty())
    {
        cout<<qp.top().name<<" "<< qp.top().roll<<" "<<qp.top().marks<<endl;
        qp.pop();
    }
    
    return 0;
}