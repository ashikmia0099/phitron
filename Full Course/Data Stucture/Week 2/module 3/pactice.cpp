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
void insert_at_tail(Node* &head,int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    Node *tmp = head;
    while (tmp ->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
    
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void sort_linked_list(Node* head)
{
    for (Node* i =head;i->next != NULL;i =  i->next)
    {
        for(Node* j =i->next;j!= NULL; j= j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val,j->val);
            }
            
        }
    }
}
int count_length(Node *&head)
{
    int count = 0;
    Node* tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
    
}
void find_mid(Node *head)
{
    int size = count_length(head);
    int mid = size+1 / 2;
    Node *tmp = head;
    for(int i=0;i<mid-1;i++)
    {
        tmp = tmp->next;
    }
    if(size%2 == 0)
    {
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else
    {
        cout<<tmp->val<<endl;
    }
    

}
int main()
{
    int val;
    Node *head = NULL;
    while(true)
    {
        cin>>val;
        if(val == -1)break;
        insert_at_tail(head,val);
    }
    sort_linked_list(head);
    // cout<<sort_linked_list<<endl;
    // print_linked_list(head);
    count_length(head);
    find_mid(head);
    return 0;
}

