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
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = b;


    head->next = a;
    a->prevus = head;
    a->next = b;
    b->prevus = a;

    print_doubly_linked(head);
    print_reverse_way(tail);

    return 0;
}