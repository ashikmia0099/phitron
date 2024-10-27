#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node *next;
        Node *prevus;
    Node(int val)
    {
        this->val =val;
        this->next = NULL;
        this->prevus = NULL;
    }
};
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
    
}
void print_reverse_way(Node *tail)
{
    Node* tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prevus;
    }
    
}
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node *newnode = new Node(val);
    if(tail == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->prevus = tail;
        tail = newnode;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin>>val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }
    print_linked_list(head);
    print_reverse_way(tail);
    
    return 0;
}