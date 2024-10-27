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
void find_max_min(Node* &head,int &max_val, int &min_val)
{
    if(head == NULL)
    {
        cout<<"empty node"<<endl;
        return;

    }
    max_val = head->val;
    min_val = head->val;
    Node* tmp = head;
    while (tmp != NULL)
    {
        max_val = max(max_val,tmp->val);
        min_val = min(min_val,tmp->val);
        tmp = tmp-> next;
    }
    
}
int main()
{
    int val;
    Node *head = NULL;
    while(true)
    {
        cin>>val;
        if(val == -1)break;
        insert_at_tail(head,val);
    }
    int max_val = INT_MIN;
    int min_val = INT_MAX;
    find_max_min(head,max_val, min_val);
    cout<<max_val<<" "<<min_val<<endl;
    return 0;
}