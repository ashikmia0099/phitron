#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    char name[100];
    float height;
    int age;

        Person(char *n,float h,int a)
        {
            strcpy(name,n);
            height=h;
            age=a;
        }
};
Person person1()
{
    char name[100]="Ashik";
    Person Ashik(name,5.11,23);
    return Ashik;
}
int main()
{
    Person Ashik=person1();
    cout<<Ashik.name<<endl;
    cout<<Ashik.height<<endl;
    cout<<Ashik.age<<endl;
    return 0;
}