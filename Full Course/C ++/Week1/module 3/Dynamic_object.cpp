#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int clss;
    int section;

        Student(char* n,int r,int c,int s)
        {
            strcpy(name,n);
            roll=r;
            clss=c;
            section=s;

        }
};
int main()
{
    char name[100]="Ashik";
    //Student Ashik (name,2,10,2023);
    Student *Ashik =new Student(name,2,10,2023)
    cout<<(*Ashik).name<<endl;
    return 0;
}