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
    while(tmp != NULL)
    {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;

}
void insert_at_any_position(Node *head,int pos, int val)
{
    Node *newnode = new Node(val);
    Node *tmp = head;
    for(int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
}
int find_list_size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    } 
    return count;
}
void insert_at_head(Node *&head,int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
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
    print_linked_list(head);

    int pos,val;
    cin>>pos>>val;
    if(pos > find_list_size(head))
    {
        cout<<"Invalid index"<<endl;
    }
    else if (pos == 0)
    {
        insert_at_head(head,val);
    }
    else
    {
        insert_at_any_position(head,pos,val);
    }
    print_linked_list(head);
    return 0;
}