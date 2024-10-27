  #include<bits/stdc++.h>
  using namespace std;
  class Student
  {
    public:
    char name[100];
    int roll;
    char clss[100];
    char section;

        Student (char *n,int r,char *c,char s)
        {
            strcpy(name,n);
            roll = r;
            strcpy(clss,c);
            section = s;
        }

  };
  int main()
  {
    Student Ashik ("Ashik",10,"honouse",'A');
    cout<<Ashik.name<<endl;
    cout<<Ashik.roll<<endl;
    cout<<Ashik.clss<<endl;
    cout<<Ashik.section<<endl;
      return 0;
  }

