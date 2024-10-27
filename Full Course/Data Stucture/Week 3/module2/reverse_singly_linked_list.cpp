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
void print_revese(Node* n)
{
    if(n== NULL)
        return;

    print_revese(n->next);
    cout<<n->val<<endl;
}
void print_recursive(Node* n)
{
    if(n== NULL)
        return;

    cout<<n->val<<endl;
    print_recursive(n->next);
}
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    return;
    
}
void reverse(Node *&head,Node *cur)
{
    if(cur->next == NULL)
    {
        head = cur;
        return;
    }
    reverse(head,cur->next);
    // Node *nextnode = cur->next;
    cur->next->next = cur;
    cur->next = NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    reverse(head,head);
    print_list(head);
    

    
    return 0;
}