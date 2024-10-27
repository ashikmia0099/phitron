#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int id;
    int roll;
    int secton;
};
int main()
{
    Student Ashik;
    Ashik.id=22001;
    Ashik.roll=2;
    Ashik.secton='A';
    char as[100]="khan";
    strcpy(Ashik.name,as);
    
    

    Student khan;
    khan.id=2001;
    khan.roll=23;
    khan.secton='V';
    char kn[100]="mahid";
    strcpy(khan.name,kn);

    cout<<khan.name<<endl;
    cout<<Ashik.roll<<endl;
    cout<<Ashik.id<<endl;
    cout<<Ashik.secton<<endl;
    return 0;
}