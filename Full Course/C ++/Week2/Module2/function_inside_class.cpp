#include<bits/stdc++.h>
using namespace std;
class person
{
    public:
    string name;
    int age;
    int mark1;
    int mark2;
        person(string nm, int ag,int m1,int m2)
        {
            name = nm;
            age = ag;
            mark1 = m1;
            mark2 = m2;
        }
        int total_mark()
        {
           return mark1 + mark2;
        }
};
int main()
{
    person ashik("ashik",24,80,80);
    cout<<ashik.total_mark()<<endl;
    return 0;
}