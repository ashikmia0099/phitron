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
int main()
{
    Person Ashik("Ashik",5.11,23);
    Person Ahammed("Ahammed",5.9,22);

    if(Ashik.age > Ahammed.age)
    cout<<(Ashik).name<<endl;
    else if(Ashik.age < Ahammed.age)
    cout<<(Ahammed).name<<endl;
    else
    cout<<"Same age"<<endl;
    return 0;
}
