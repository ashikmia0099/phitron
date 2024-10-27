#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    int clss;
    char section;
        Student(int r,int c,int  s,char *n)
        {
            roll = r;
            clss = c;
            section =s;
            strcpy(name,n);
        }
};
Student fun()
{
    char name[100]="Ashik";
    Student Ashik (29,10,'A',name);
    return Ashik;
}
int main()
{
    Student Ashik = fun();

      cout<<Ashik.name<<endl;
      cout<<Ashik.roll<<endl;
      cout<<Ashik.clss<<endl;
      cout<<Ashik.section<<endl;
    return 0;

}
