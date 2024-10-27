#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head,int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp ->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
    
}
bool compair_list(Node *head1, Node *head2)
{
    if(head1 == NULL && head2 == NULL)
    {
        return true;
    }
    else if (head1 == NULL|| head2 == NULL || head1->val != head2->val)
    {
       return false;
    }
    return compair_list(head1->next,head2->next);
    
    
}
int main()
{
    int val;
    Node *head1 = NULL;
    Node *next1 = NULL;
    while(true)
    {
        cin>>val;
        if(val == -1)break;
        insert_at_tail(head1,val);
    }
    Node *head2 = NULL;
    Node *next2 = NULL;
    while(true)
    {
        cin>>val;
        if(val == -1)break;
        insert_at_tail(head2,val);
    }
    if(compair_list(head1,head2))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}