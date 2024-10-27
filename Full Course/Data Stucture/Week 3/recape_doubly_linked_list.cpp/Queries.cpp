#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_linked_list(Node* &head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    while (tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->prev;
    }
    
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = tail->next;
}
void insert_at_position(Node* &head, Node* &tail,int index,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL && index == NULL)
    {
        head = newnode;
        return;
    }
    if(head == NULL && index != NULL)
    {
        cout<<"Invallid"<<endl;
        return;
    }
    if(index == 0)
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    Node* tmp = head;
    int count =0;
    while (tmp->next != NULL && count < index -1 )
    {
        tmp=tmp->next;
        count++;
    }
    if(tmp == NULL && count < index -1)
    {
        cout<<"invalid"<<endl;
    }
    newnode->next = tmp->next;
    newnode->prev = tmp;
    if(tmp->next != NULL)
    {
        tmp->next->prev = newnode;
    }
    tmp->next = newnode;
    
    
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,v;
        cin>>x>>v;
        insert_at_position(head,tail,x,v);
        print_linked_list(head);
    }
    
    return 0;
}