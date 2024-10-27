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
void reverse_list(Node *head)
{
    if(head == NULL) return;

    reverse_list(head->next);
    cout<< head->val<<" ";
}
void recurshon_list(Node *head)
{
    if(head == NULL) return;

    
    cout<<head->val<<" ";
    recurshon_list(head->next);
}
int main() 
{
    Node* head = NULL;
    Node* prev = NULL;
    int val;
    while (cin >> val && val != -1) {
        Node* node = new Node(val);

        if (prev) 
        {
            prev->next = node;
        } else 
        {
            head = node;
        }

        prev = node;
    }
    reverse_list(head);
    cout<<endl;
    recurshon_list(head);
    Node* newnode = head;
    while (newnode) {
        Node* temp = newnode;
        newnode = newnode->next;
        delete temp;
    }

    return 0;
}

