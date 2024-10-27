#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_linked_list(Node* head)
{
    
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
   
}
int list_size(Node* head)
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
void reverse_list(Node* tail)
{
    Node* tmp = tail;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
void insert_at_index(Node* &head,Node* &tail,int index,int val)
{
    Node* newnode = new Node(val);
    if(index < 0 || index > list_size(head))
    {
        cout<<"Invalid"<<endl;
        delete newnode;
        return;
    }

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }

    else if (index == 0)
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
    }
    else if(index == list_size(head))
    {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
    else
    {
        Node* tmp = head;
        int curr_index = 0;
        while (curr_index < index)
        {
            tmp = tmp->next;
            curr_index++;
        }
        
        newnode->next = tmp;
        newnode->prev = tmp->prev;
        newnode->prev->next = newnode;
        tmp->prev = newnode;
        
    }
    // if(index>=0 && index <= list_size(head)-1)
    // {
    //     cout<<"L -> ";
    //     print_linked_list(head);
    //     cout<<"R -> ";
    //     reverse_list(tail);
    // }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,v;
        cin>>x>>v;
        insert_at_index(head,tail,x,v);
        if (x >= 0 && x <= list_size(head) - 1)
        {
            cout << "L -> ";
            print_linked_list(head);
            cout << "R -> ";
            reverse_list(tail);
        }
    }
    

    return 0;
} 