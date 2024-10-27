#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Ticket
{
    public:
    char Passenger_name[100];
    int ticket_number;
    int ticket_price;
        Ticket(char* pn,int tn,int tp)
        {
            strcpy(Passenger_name,pn);
            ticket_number = tn;
            ticket_price = tp;
        }
};
int main()
{
    Ticket Ashik("Ashik Ahammed",01,250);
    cout<<Ashik.Passenger_name<<endl;
    cout<<Ashik.ticket_number<<endl;
    cout<<Ashik.ticket_price<<endl;
    return 0;
}