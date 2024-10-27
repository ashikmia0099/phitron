#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        // Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        // this->prev = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = head;

    Node * slow = head;
    Node * fast = head;
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {
           flag = true;
           break;
        }
        
    }
    if(flag == true)
    {
        cout<<"circle detected"<<endl;
    } 
    else
    {
        cout<<"circle not detected"<<endl;
    }
    


    
    return 0;
}