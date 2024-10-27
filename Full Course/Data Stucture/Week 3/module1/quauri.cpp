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
void insert_at_head(Node *&head,int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void insert_at_tail(Node *&head,int val)
{
    Node * newNode = new Node(val);
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int main()
{
    int n;
    cin>>n;
    Node *head = NULL;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x == 0)
        {
            insert_at_head(head,y);
        }
        else if (x==1)
        {
            insert_at_tail(head,y);
        }
        
    }
    
    return 0;
}