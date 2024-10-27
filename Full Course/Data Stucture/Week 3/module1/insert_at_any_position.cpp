#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prevus;
    Node (int val)
    {
        this->val = val;
        this->next = NULL;
        this->prevus = NULL;
    }
    
};
void print_dual_linked(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    
}
void print_reverse(Node *tail)
{
    Node* tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prevus;
    }
    cout<<endl;
    
}
void insert_any_position(Node *head,int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for(int i=1; i<=pos-1;i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    newnode->next->prevus = newnode;
    newnode->prevus = tmp;

}
int list_size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    head->next = a;
    a->prevus  = head;
    a->next = b;
    b->prevus = a;
    b->next = c;
    c->prevus = b;

    int pos,val;
    cin>>pos>>val;
    if(pos >= list_size(head))
    {
        cout<<"Invalid count";
    }
    else
    {
        insert_any_position(head,pos,val); 
    }
    cout<<endl;
    print_dual_linked(head);
    print_reverse(tail);
    
    return 0;
}