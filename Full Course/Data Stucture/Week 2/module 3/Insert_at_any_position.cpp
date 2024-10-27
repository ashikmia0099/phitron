#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node *next;

    Node(int val)
    {
        this->value = val;
        this->next = NULL;
    }
};
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert_at_any_position(Node *head,int pos,int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for(int i=1; i<pos -1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    insert_at_any_position(head,2,100);
    print_linked_list(head);
    return 0;
}