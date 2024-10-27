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
void print_doubly_linked(Node *head)
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
void delete_head(Node* &head)
{
    Node* deletenode = head;
    head = head->next;
    delete deletenode;
    head->prevus = NULL;
}
void delete_tail(Node* &tail)
{
    Node* deletenode = tail;
    tail = tail->prevus;
    delete deletenode;
    tail->next = NULL;
}
int size(Node *head)
{
    Node* tmp = head;
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
    // Node *head = NULL;
    // Node *tail = NULL;

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;



    head->next = a;
    a->prevus = head;
    a->next = b;
    b->prevus = a;
    b->next = c;
    c->prevus = b;

    int pos;
    // cin>>pos;
    // delete_node(head,pos);
    // delete_tail(tail);
    delete_head(head);
    
    
    print_doubly_linked(head);
    print_reverse_way(tail);

    return 0;
}