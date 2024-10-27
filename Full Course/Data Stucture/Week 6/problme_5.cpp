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
            else if(a.marks == b.marks)
            {
                return a.roll > b.roll;
            }

            else return false;
            
        }
};
void current_max(priority_queue<Student, vector<Student>,cmp> &qp,int q)
{
    while (q--)
    {
        int c;
        cin>>c;
        if(c == 0)
        {
            string name;
            int roll,marks;
            cin>>name>>roll>>marks;
            Student student(name,roll,marks);
            qp.push(student);
            cout<<qp.top().name<<" "<< qp.top().roll<<" "<<qp.top().marks<<endl;
        }
        
        else if(c == 1)
        {
            if(!qp.empty())
            {
                cout<<qp.top().name<<" "<< qp.top().roll<<" "<<qp.top().marks<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }   
        }
        else if(c == 2)
        {
            if(!qp.empty())
            {
                qp.pop();
                if(!qp.empty())
                {
                    cout<<qp.top().name<<" "<< qp.top().roll<<" "<<qp.top().marks<<endl;
                }
                else
                {
                    cout<<"Empty"<<endl;
                }
            } 
            else
            {
                cout<<"Empty"<<endl;
            }
            
        }
        else
        {
            break;
        }
        
    }
}
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
    int q;
    cin>>q;
    current_max(qp,q);
    
    return 0;
}

