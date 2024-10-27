#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int age;
    int mark;
    
};
int main()
{
    Student a[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,a[i].name);
        cin>>a[i].age>>a[i].mark;
        cin.ignore();
    }
    Student ashik;
    ashik.mark=INT_MIN;
    for(int i=0;i<3;i++)            
    {
        if(a[i].mark>ashik.mark)
        {
            ashik=a[i];
        }
    }
    for(int i=0;i<3;i++) 
    {
        cout<<ashik.mark<<" "<<ashik.age<<" "<<ashik.mark<<endl;
    }   

    // cout<< ashik.name<<" "<<ashik.age<<" "<<ashik.mark<<endl;

    // Student mn;
    // mn.mark=INT_MAX;
    // for(int i=0;i<3;i++)            
    // {
    //     if(a[i].mark<mn.mark)
    //     {
    //         mn=a[i];
    //     }
    // }    

    // cout<< mn.name<<" "<<mn.age<<" "<<mn.mark<<endl;
    return 0;
}