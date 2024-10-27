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
    
    Person *Ashik = new Person("Ashik",5.11,22);
    cout<<(*Ashik).name<<endl;
    cout<<(*Ashik).height<<endl;
    cout<<(*Ashik).age<<endl;
    return 0;
}

