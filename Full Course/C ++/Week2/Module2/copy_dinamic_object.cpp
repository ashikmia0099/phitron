#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
        Person(string nm,int ag)
        {
            name = nm;
            age = ag;
        }
};
int main()
{
    Person *Sakib =new Person ("Ashik",24);
    Person *rakib = new Person ("Khan",24);
    // used without de reference
    //rakib = Sakib;

    // Used de regerence 
    *rakib = *Sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}