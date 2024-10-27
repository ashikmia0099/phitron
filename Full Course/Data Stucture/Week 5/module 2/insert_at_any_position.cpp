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
void insert_at_tail(Node *&head,int v)
{
    Node * newNode = new Node(v);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    tmp = newNode;
}
void print_link_list(Node *head)
{
    
    Node *tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void insert_at_position(Node* &head,int pos, int v)
{
    Node* newnode = new Node(v);
    if(pos == 0)
    {
        newnode->next = head;
        head = newnode;
        return;
    }
    Node * tmp = head;
    for(int i=0; i < pos - 1;i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next = newnode;
    
}
int main()
{
    int val;
    Node * head = NULL;
    while (true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,val);
    }
    int pos;
    cin>>pos>>val;
    insert_at_position(head,pos,val);
    print_link_list(head);

    return 0;
}

