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


void revese_list(Node* head) 
{
    stack<int> val;
    Node* newnode = head;
    while (newnode) 
    {
        val.push(newnode->val);
        newnode = newnode->next;
    }

    while (!val.empty()) 
    {
        cout << val.top() << " ";
        val.pop();
    }
    cout << endl;
}
void print_linked_list(Node* head) 
{
    Node* newnode = head;
    while (newnode) 
    {
        cout << newnode->val << " ";
        newnode = newnode->next;
    }
    cout << endl;
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
    revese_list(head);
    print_linked_list(head);
    Node* newnode = head;
    while (newnode) {
        Node* temp = newnode;
        newnode = newnode->next;
        delete temp;
    }

    return 0;
}
